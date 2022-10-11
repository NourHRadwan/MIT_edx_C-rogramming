#include <stdio.h>

void squareArray(int *, int);
void printArray(int *, int);
int main(void) {
    
    int array[] = {6, 2, -4, 8, 5, 1};
    int N = 6;
    printArray(array, N);
    squareArray(array, N);
    printArray(array, N);
    
    return 0;
}
void squareArray(int * ptr, int size){
int i;
for (i = 0; i <size ; i++)
{
    ptr[i] = ptr[i] * ptr[i];
}
}
void printArray(int * ptr, int size){
int i;
for (i = 0; i < size; i++)
{
    printf("%d ,", ptr[i]);
}
printf("\n");
}
