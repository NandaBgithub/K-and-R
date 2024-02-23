/*
A simple demonstration of functions
*/

#include <stdio.h>

int main(){
    printf("2^2 = %d", pow(2, 2));
    return 1;
}

// Take the base number to the power of
int pow(int base, int power){
    int res = 1;

    for (int i = 0; i < power; i++){
        res = res * base;
    }

    return res;
}