/*
    This program counts the number of digits but uses an
*/
#include <stdio.h>
int main(){
    int n = 10, space = 0, tab = 0, other = 0;
    char c;
    int a[10] = {0};

    while((c = getchar()) != EOF){
        if (c == ' '){
            space++;
        }else if (c == '\t'){
            tab++;
        }else if (c >= '0' || c <= '9'){
            a[c-'0']++;
        } else {
            other++;
        }
    }

    for (int i = 0; i<n; i++){
        printf("digit %d count %d\n", i, a[i]);
    }
    printf("whitespace %d tab %d other %d", space, tab, other);
    return 0;
}