#include <stdio.h>
#include <string.h>
int _strlen(char*c)
{
    int i, count = 0;

	for (i = 0; *s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;
    str = "My first strlen!";
    len = _strlen(*str);
    printf("%d\n", len);
    return (0);
}