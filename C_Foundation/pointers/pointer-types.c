#include <stdio.h>
// study Pointer types, pointer arithmetic, void pointers
int main(){
    int a = 5025;
    int* p = &a;
    printf("The size of integer a is %lu\n", sizeof(a));
    printf("address = %d, and Value is %d\n", p, *p);
    printf("address = %d, and Value is %d\n", p+1, *(p+1));
    char* p0;
    // type casting p to p0
    p0 = (char*)p;
    printf("The size of char a is %lu\n", sizeof(char));
    printf("address = %d, and Value is %d\n", p0, *p0);
    printf("address = %d, and Value is %d\n", p0+1, *(p0+1));
}