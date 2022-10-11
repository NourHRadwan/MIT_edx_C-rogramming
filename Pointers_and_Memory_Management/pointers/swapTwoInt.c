#include <stdio.h>
//Write a function that swaps the values of two integers.

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int swap_int(int *, int *);
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
int swap_int(int *x, int *y){
int tmp;
tmp = *x;
*y = *x;
*y = tmp;
return (0);
}