#include <stdio.h>
// a program that prints the alphabet in lowercase, followed by a new line.
//Print all the letters except q and e
int main()
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
    {
        if (c != 'q' && c != 'e')
        {
            putchar(c);
        }
    }
    putchar('\n');
}