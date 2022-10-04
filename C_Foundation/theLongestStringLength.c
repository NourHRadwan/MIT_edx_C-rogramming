#include <stdio.h>
/*
Your job is to find the length of the longest word in a text with no punctuation
or special characters of any kind - only contains words. 
To do so, please write a C-program that takes as a input first the number of words in a text, 
followed by all of the words in the text. The output of your program should be the length of the longest word in the text.
To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/

int main(){
    int length[101];
    int nbword;
    int i, k, t;
    int longest=0;
    char words[11];
    scanf("%d", &nbword);
    for(i=0; i<101; i++)
    {
        length[i] = 0;
    }
    for(k = 0; k< nbword; k++)
    {
       scanf("%s", words);
       t =0;
       while(words[t] != '\0')
       { t++; }
       length[k] = t;
    }
    longest = length[0];
    for ( i=0; i< nbword; i++)
    {
     if (length[i] > longest)
     longest = length[i];
    }
    printf("%d",longest);
}
