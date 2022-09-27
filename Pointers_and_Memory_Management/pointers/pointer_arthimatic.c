#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("The value of a is %d: \n",a);
    printf("The value of the address is %d\n", p);
    printf("THe derefrencing value is %d\n",*p);
    printf("The adress of p+1 is %d\n", p+1);
    printf("the size of a is %lu\n",sizeof(a));
    printf("the derefrencing value at p+1 is %d\n", *(p+1));
}