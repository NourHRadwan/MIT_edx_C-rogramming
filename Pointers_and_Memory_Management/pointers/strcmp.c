#include <stdio.h>
int _strcmp(char *s1, char *s2);

/**
 * strcmp : compares two strings s1 and s2;
 *
 * Return: value < 0 if s1 < s2.
 * value > 0 if s1 > s2
 * value = 0 if s1 =s2
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
int _strcmp(char *s1, char *s2){
    int i = 0;
    int result;
    for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++){
    if (s1[i] != s2[i])
    {
        return (s1 - s2);
    }
    else if (s1[i] == s2[i])
    return(0);
}
}