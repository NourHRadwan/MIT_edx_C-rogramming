#include <stdio.h>
void Double(int A[], int size)
{

for(int i=0; i < size; i++)
{
  A[i] = 2*A[i];
}
}

int main()
{
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/ sizeof(A[0]);
    Double(A,size);
    for (int i=0; i<size; i++)
    {
    printf("A[%d] equal %d\n",i, A[i]);
    }
}