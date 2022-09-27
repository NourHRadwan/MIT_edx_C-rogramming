#include <stdio.h>
/* This script display the relation between
Arrays and pointers*/

int main()
{
int A[] ={2,4,5,8,1};
printf("A is %d\n", A);
printf("&A[0] is %d\n", &A[0]);
printf("A[0] is %d\n", A[0]);
printf("*A is %d\n", *A);
//Using loop to print the address of every elemnt in A
for (int i=0; i<5; i++)
{
    printf("address &A[%d] is %d\n",i, &A[i]);
    printf("address A+%d is %d\n",i, A+i);
    printf("A[%d] is %d\n",i, A[i]);
    printf("A[%d+1] is %d\n",i, A[i+1]);
    printf("*(A+%d)is %d\n",i+1,*(A+i));
}
}