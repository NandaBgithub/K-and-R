/*
As for all the program files in this book, I modify them from the book to add more features.

The following program takes in characters from a text file through
redirection of text content into stdin and outputs these characters to stdout.

To test this file, create your own text file in the same directory as this program file, 
and type some words into it. 
Compile this file using your standard gcc -c and then create the executable using gcc -o.

To actually run the file use the following syntax, ignoring the quotations "programName < testText.txt"
This is way of running a single C file uses redirection. Where the "<" operator allows 
us to redirect text from a file into stdin.

Once in stdin, we can use getchar() to get each character, and putchar() to put charcaters to stdout which
then displays the charcater onto the terminal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char curchar;
    // getchar() stores the character to the variable it is assigned to
    // Note that EOF's actual value is -1 which indicates END OF FILE
    while ((curchar = getchar()) != EOF){
        printf("Current character: ");
        // put the character stored in curchar to stdout so it displays onto the terminal
        putchar(curchar);
        printf("\n");
    }

    return 0;
}

/*
This is an alternative way of going through the input text file character by character. This
time instead of using stdin we use a file stream from that stblib.h library. We open the file in
a 'r' mode which indicates read mode and then we read a character and store it in the address of some variable.
When you use the file stream method we run it without the redirect opreator. So run it as follows "programName testFile.txt"
*/
/*
int main(int argc, char** argv){
    FILE *filePointer = fopen(argv[1], "r");
    char a;
    
    while (fscanf(filePointer, "%c", &a) == 1 && a != EOF){
        printf("character: %c", a);
        printf("\n");
    }

    fclose(filePointer);
    return 0;
}
*/