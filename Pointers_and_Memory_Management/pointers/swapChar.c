#include <stdio.h>
 
void swap (char *x, char *y); 
int main(void) {
    char c = 'P';
    char d = 'T';
    printf("%c%c ", c, d);
    swap(&c, &d);
    printf("%c%c", c, d);
    return 0;
}

void swap (char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}