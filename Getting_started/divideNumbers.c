#include <stdio.h>
int main(void)
{
   double tempC;
   double tempF;
   printf("Enter the Temperature in C? ");
   scanf("%lf", &tempC);
   printf("The Temperature in F is %lf \n", tempC*9/5+32);
   return 0;
}
