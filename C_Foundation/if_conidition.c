#include <stdio.h>
int main(void) {
    // + - * / % : arithmetic operators
    // < > <= >= != == : comparison operators
    int a = 5;
    int b = 2;
    int result;
    printf("Check: Is a > b?\n");
    result = (a>b); //or (a==b) to check equallity , (a<b)
    // (a<=b) a is less than or equal to b
    // (a != b) if a is not equal to b
    printf("Result is %d.\n", result); // Result is 0 if false, Result is 1 if true
    if (result) {
        printf("TRUE!\n");
    } else {
        printf("FALSE!\n");
    }
    return 0;
}
