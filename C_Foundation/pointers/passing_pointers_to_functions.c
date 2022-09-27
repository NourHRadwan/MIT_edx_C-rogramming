#include <stdio.h>
// Case 1: Variable value wont change after passing timeTwo
void timesTwo(int); // This function can't change the value on n  
int main(void) {  // The value on n in this main function won't change after passing through timesTwo
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("In main: You entered %d.\n", n);
    timesTwo(n);
    printf("In main: The value of n is %d.\n", n);
    return 0;
}
void timesTwo(int num) {
    printf("In the function: the number is %d.\n", num);
    num = num * 2;
    printf("In the function: the new number is %d.\n", num);
}
// Case 2: to change the value of n you need to pass the address of n to timeTwo
void timesTwo(int *); // '*' used to pass adress, "int *"
int main(void) {
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("In main: You entered %d.\n", n);
    timesTwo(&n); // Used & to pass the address of n to the timeTwo function
    printf("In main: The value of n is %d.\n", n);
    return 0;
}

void timesTwo(int * numptr) { // same as decrelation above use '*' to pass address
    printf("In the function: the number is %d.\n", *numptr); // Derefrencing the pointer by adding *
    *numptr = *numptr * 2; // use * to multiple by two what is stored in the address not the value on numptr
    printf("In the function: the new number is %d.\n", *numptr);
}
