/*
From this exercise I learnt how to run and compile C. 
This exercise forced me to actually get C set up on my computer.
For me I used a Windows machine, so I just followed the instructions shown on MinGW website
which showed me how to set up the gcc compiler. 
For IDE, I chose VScode. 
*/

// Simple hello world program
/*
The following commands for running and compiling C in windows command prompt
- Go to the directory of the .c file you want to compile and open command prompt there
To compile type the following: 
>> gcc -c File.c 
>> gcc -o File.c File

After compiling type the following to run:
>> File
*/

// stdio.h is apparently where all the print related stuff comes from
#include <stdio.h>

// main is where you place code you want to run
int main(){
    // this is printf short for print format
    printf("hello world \n");
}



/*
Common errors

Not includeing #incliude <stdio.h> statement
- This throws an "implicit declaration of function printf()" error. 
  Since we we need stdio.h in order to access printf(), we need to include it.

Not including ";" semicolon after statement inside main function
- Throws an error that tells you to include it. Consider this like a full stop
  in a sentence. The C compiler needs this to know that this is the end of a statement.
*/

