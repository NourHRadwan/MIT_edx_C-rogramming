#include <stdio.h>

int main(){
    // ways to declare array of string
    /* 1. char C[5];
    C[0]= 'N';
    C[1]= 'O';
    C[2]= 'U';
    C[3]= 'R';
    C[4]= '\0';*/
    // C[5] = "NOUR"; The null character exists
    C[5] = {'N', 'O','U','R','\0'}; //must include The null character
printf("%s\n", C);
}