#include <stdio.h>
// main - print the value of * , **, ***
int main(){
    
    int x=5;
    int* p=&x;
    int** q=&p;
    int*** r=&q;
    printf("the value of x is %d\n", x);
    printf("the value of *p is %d\n", *p);
    printf("the size of int** is %lu\n", sizeof(int**));
    printf("the value of &p is %d\n", &p);
    printf("the value of (p+1) is %d\n", *p+1);
    printf("the value of *q is %d\n", *q);
    printf("the value of (q+1) is %d\n", *q+1);
    printf("the value of &q is %d\n", &q);
    printf("the value of **q is %d\n", *(*q));
    printf("the value of **r is %d\n", ***r);
}