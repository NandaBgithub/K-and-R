/*
In this exercise is the use of printf()

This function comes from <stdio.h> which is some special package or library of functions

Two ways to use printf()
1. Printing a string: printf("heres some string");
2. Printing a variable using format specifiers: printf("Heres the variable: %d", var);
3. Printing many variables of different types: printf("Different variables %d %s", var1, var2);

The second case has a special %d which is the format specifier for a variable of type integer. 
Wherever you put this format specifier is where it will show inside the printed string. 
Different types of data need their own format specifiers like %c for single characters or %s for
strings. 
*/


#include <stdio.h>

int main(){
    printf("Printf with string only \n"); 
    printf("Printf \c");
}

/*
Compiling the above throws a "unknown escape \ character" error
This is because \ is reserved as an escape character for special characters
like "\n" for new line or "\t" for tab character. 

If you want to print the \ itself, you have to escape it first like so, "\\"
*/