#include <stdio.h>
/* Write a program that prints all possible
different combinations of two digits.
1.Numbers must be separated by ,, followed by a space
2.The two digits must be different
3.01 and 10 are considered the same combination of the two digits 0 and 1
4.Print only the smallest combination of two digits
5.Numbers should be printed in ascending order, with two digits
6.You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
7.You can only use putchar five times maximum in your code
8.You are not allowed to use any variable of type char
9.All your code should be in the main function */

int main()
{
int i;
int j;
for (i = '0'; i <='8'; i++)
{
    for (j= i + 1; j<='9'; j++)
    {
       
            putchar(i);
            putchar(j);

        if (j < '9' || i < '8')
			{
				putchar(',');
				putchar(' ');
			}
    }
}
}