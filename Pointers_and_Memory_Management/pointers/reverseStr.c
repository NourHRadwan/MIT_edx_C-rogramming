#include <stdio.h>
//Write a function that prints a string, in reverse, followed by a new line.
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *str);
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
   return (0);
}
void print_rev(char *str){
    int i = 0;
    while (*(str+i) != '\0')
    i++;
    i -= 1;
    while (i != 0)
    {
       printf("%c", str[i]);
        i--;
    }
}