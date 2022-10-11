#include <stdio.h>
int main(){
    int i;
    char words[3][10]; // a string of 3 words 
    //each are not longer than 10 chars includeing the NULL 
    printf("please enter the 3 words\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%s", words[i]);
    }
    printf("you entered \n");
    for (i = 0; i < 3; i++)
    {
        printf("%s", words[i]);
    }    
    printf("\nFirst letters: \n");
    for (i=0; i<3; i++) {
        printf("%s starts with the letter %c.\n", words[i], words[i][0]);
    }
}