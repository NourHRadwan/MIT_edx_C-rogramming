#include <stdio.h>
/*
You want to determine the number of cities in a given region 
that have a population strictly greater than 10,000. 
To do this, you write a program that first reads the number of cities in a region as an integer, 
and then the populations for each city one by one (also integers).
*/
int main(void)
{
    int NumberOfCities, population;
    int index = 10000;
    int count =0;
    scanf("%d", &NumberOfCities);
    for(int i=0; i < NumberOfCities; i++)
    {
        scanf("%d",&population);
         if (population >index)
        {
            count++;
        }

    }
    printf("%d",count);
}