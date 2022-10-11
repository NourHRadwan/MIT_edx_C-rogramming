#include <stdio.h>
void myFunction(int *p, int *q);

int main(void) {
    int i = 1;
    int j = 2;
    myFunction(&i, &j);
    printf("%d %d \n", i, j);
    myFunction(&i, &j);
    printf("%d %d \n", i, j);
    myFunction(&i, &j);
    printf("%d %d \n", i, j);
    return 0;
}

void myFunction(int *p, int *q) {
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp + *q;
}