#include <stdio.h>
// program that prints all single digit numbers
// of base 10 starting from 0, followed by a new line.
//You are not allowed to use any variable of type char
//You can only use the putchar function 
//You can only use putchar twice in your code
 int main()
 {
int i;
for (i ='0'; i <= '9';i++)
{
    putchar(i);
}
putchar('\n');
 }