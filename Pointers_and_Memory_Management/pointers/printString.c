#include <stdio.h>
//Write a function that prints a string, followed by a new line, to stdout.

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str); 
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
void _puts(char *str){
    int i =0;
    while (str[i] != '\0')
    {
    printf("%c", str[i]);
    i++;
    }
}

