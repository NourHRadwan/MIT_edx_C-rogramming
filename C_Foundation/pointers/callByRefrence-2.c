#include <stdio.h>
void increment(int *p)
{*p = *p + 1;
    printf("Address of variable in increment is %d\n",&p);}

int main ()
{
int a;
a =10;
increment(&a);
printf("Address of varaible in incerment is %d\n",&a);
printf("The value of a is %d\n",a);
}