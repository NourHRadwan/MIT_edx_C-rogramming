#include <stdio.h>
//  program that prints the lowercase alphabet in reverse, 
//followed by a new line.
int main()
{
    char c;
    for(c ='z'; c >= 'a'; c--)
    {
        putchar(c);
    }
    putchar('\n');
}