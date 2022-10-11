#include <stdio.h>
int main(){
    char a[3]; // leave a extra space for NULL 
    char b[4];
    char c[5];
    char *words[3] = {a, b, c};
    printf("Please enter a word with at  most 3 letters: ");
    scanf("%s", a);
    printf("Please enter a word with at  most 4 letters: ");
    scanf("%s", b);
    printf("Please enter a word with at  most 5 letters: ");
    scanf("%s", c);
    printf("You entered: \n");
    printf("%s %s %s", a,b,c);
    printf("%s %s %s", words[0], words[1], words[2]);
}