#include <stdio.h>
// prints all the numbers of base 16 in lowercase, 
//followed by a new line.
int main (){
    char c;
    for (c='0'; c<='9'; c++)
    {
        putchar(c);
    }

    for (c = 'a'; c <='f'; c++)
    {
        putchar(c);
    }
    putchar('\n');
}