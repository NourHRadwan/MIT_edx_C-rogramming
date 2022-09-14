#include <stdio.h>
int main(void)
{
    int timeTableNumber;
    int i;
    printf("What is the multiplication table number?\n");
    scanf("%d", &timeTableNumber);
    for (i=0; i<=10; i++)
    {printf ("%dx%d =%d\n", i, timeTableNumber, i*timeTableNumber);}
return 0;   
}
