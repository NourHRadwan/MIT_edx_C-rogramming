//#include "main.h"
#include <stdio.h>
char *_strcat(char *dest, char *src);

/**
 * This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
char *_strcat(char *dest, char *src){
    char *start = dest;
    while (*dest != '\0')
    {
        dest++;
    }
   while (*src != '\0')
   {
    *dest = *src;
    dest++;
    src++;
   }
   *dest = '\0';
   return(start);
}