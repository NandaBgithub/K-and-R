/*
This program counts the number of lines from stdin
*/

#include <stdio.h>

int main(){
    char curchar;
    int count = 0;

    while((curchar = getchar()) != EOF){
        if (curchar == '\n'){
            ++count;
        }
    }

    printf("Number of lines %d\n", count);
}