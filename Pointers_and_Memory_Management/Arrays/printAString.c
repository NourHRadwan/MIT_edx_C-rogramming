#include <stdio.h>
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _puts(char *str)
{
   while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
   // printf("%s", str);
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}