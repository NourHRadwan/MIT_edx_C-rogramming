#include <stdio.h>
#define VERSION 3
int main(){

#if VERSION == 3
printf("print this for VERSION 3"); 
#else 
printf("Print this if not VERSION 1");
#endif
}