#include <stdio.h>
#include <stdlib.h>
    // Get input words from stdin and print out its lengths in a horizontal histogram
    /*
        input : "I ma you every"
        horizontal histogram:
            I           -
            ma          --
            you         ---
            every       -----
        vertical histogram:

            |   
            |
            |   |
            |   |   |
            |   |   |   |
    */
    
    /*
    Vertical approach
    Have an array of lengths of words
    Sort the array from largest to smallest use the quicksort() build into stdlib
    
    drawvertical(){
        for (int i = maximumHeight; i>0; i--){
            for (int j = 0; j<length of array; j++){
                printf(" ");
                if (sortedarray[j] >= maximum height){
                    printf("\n|")
                }
            }
        }
    }
    */

// The question does not specify if the lines drawn are for unique words, so we will draw lines for ALL words
// Regardless if they have been encountered already
// Assume the input is only 100 words long, and malloc cannot be used

void draw(int *lenarray, int size);

int main(int argc, char **argv){
    // Count words
    char c;
    int len = 0;
    int i = 0;
    int lenarray[100] = {0};

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n'){
            lenarray[i] = len;
            i++; // New word starts when a space or new line encountered
            len = 0;
        }

        len++;
    }

    if (c == EOF){
        // The last word's length is not yet updated
        lenarray[i] = len;
    }

    for (int j = 0; j < i+1; j++){
        printf("length = %d\n", lenarray[j]);
    }

    draw(lenarray, i+1);
}

void draw(int lenarray[], int size){
    // Linear search for the max length
    int max = 0;
    for (int i = 0; i<size; i++){
        if (lenarray[i] > max){
            max = lenarray[i];
        }
    }

    for (int curdepth = max; curdepth > 0; curdepth--){
        for (int i = 0; i<size; i++){
            if (lenarray[i] >= curdepth){
                printf("|   ");
            }
        }
        printf("\n");
    }
}