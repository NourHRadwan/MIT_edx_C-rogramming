#include <stdio.h>
//Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int reset_to_98(int *);
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
int reset_to_98(int *n){
    int *ptr;
    ptr = n;
    *ptr = 98;
    return (*ptr);

}