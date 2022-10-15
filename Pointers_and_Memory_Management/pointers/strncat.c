#include <stdio.h>

/**
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes.
 * Return: Return a pointer to the resulting string dest
 */
 char *_strncat(char *dest, char *src, int n);
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
char *_strncat(char *dest, char *src, int n){
    int i,j;
    i = 0;
    j = 0;
    while (dest != '\0')
    {
     i++;
    }
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
    }
    return (dest);
}