#include <stdio.h>
/* change the char lower case to upper case */
int _uppercase(char* c, int len);
int _strlen(char* c);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;
    str = "My first string!";
    len = _strlen(str);
    printf("%d\n", len);
    _uppercase(str, len);
    printf("%s", str);
    return (0);
}

int _strlen(char* c)
{
    int i, count = 0;

	for (i = 0; c[i] != '\0'; i++)
		count++;
	return (count);
}

int _uppercase(char* c, int len)
{
int i =0;
for(i =0; i< len; i++)
{
    if(c[i] >='a' && c[i]>= 'z')
    c[i] = c[i] - 32;
}
}