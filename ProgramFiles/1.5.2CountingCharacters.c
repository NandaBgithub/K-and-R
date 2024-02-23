/*
The following program counts the number of characters of a given
input from stdin.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char curchar;
    int count = 0;
    while ((curchar = getchar()) != EOF){
        ++count;
    }

    printf("Characters: %d\n", count);
    return 1;
}

