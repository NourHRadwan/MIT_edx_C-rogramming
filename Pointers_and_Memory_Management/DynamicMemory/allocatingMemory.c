#include <stdlib.h>
int main(void){
    int * intptr; //pointer to int
    double * doubleptr; //pointer to double
    intptr = (int *) malloc(sizeof(int));
    * intptr = 5;
    doubleptr = (double *) malloc(sizeof(double));
    * doubleptr = 9.0;
    return 0;
}