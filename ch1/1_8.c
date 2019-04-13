
#include <stdio.h>
// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
int main()
{
    int c;
    int nblanks = 0;
    int ntabs = 0;
    int nl = 0;
    while ((c = getchar()) != EOF){

        if (c == '\n'){
            ++nl;
        }
        else if(c == ' '){
            ++nblanks;
        }else if(c == '\t'){
            ++ntabs;
        }
    }
    printf("newline : %d, tabs: %d, blanks : %d\n", nl, ntabs, nblanks);
    return 0;
}
