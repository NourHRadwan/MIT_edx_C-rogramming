#include <stdio.h>
/*
 *main : display the syntax of pointers when using 'printf'
 * Return 0;
 */

int main()
{
int num = 5;
int *p = &num;
printf("Address using p = %p",&p);
printf("Address using d = %d",*p);
printf("Address using o = %o",*p);

}
