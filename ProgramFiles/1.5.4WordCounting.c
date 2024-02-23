#include <stdio.h>

// This program counts the number of lines, characters words from stdin

int main(){
    char curchar;
    int wordcount = 0;
    int charcount = 0;
    int linecount = 0;

    while ((curchar = getchar()) != EOF){
        if (curchar == ' ' || curchar == '\t' || curchar == '\n'){
            ++wordcount;
        } 
        
        if (curchar == '\n'){
            linecount++;
        }

        ++charcount;
    }

    printf("wordcount = %d linecount = %d charcount = %d", wordcount, linecount, charcount);
    return 1;
}