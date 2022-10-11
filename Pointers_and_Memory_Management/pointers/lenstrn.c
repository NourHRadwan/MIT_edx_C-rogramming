#include <stdio.h>
//Write a function that returns the length of a string.
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *);
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
int _strlen(char *str){
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}