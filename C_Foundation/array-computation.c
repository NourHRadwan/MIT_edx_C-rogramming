#include <stdio.h>
/*You plan to make a delicious meal and want to take the money you need to buy the ingredients.
 Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need.
 The program should read in the number of ingredients (up to a maximum of 10 ingredients),
 then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order).
Your program should calculate the total cost of these purchases, then display it with 6 decimal places.*/
int main(void)
{
    int numOfing;
    scanf("%d",&numOfing);
    double array[numOfing];
    double weight;
    double priceofI;
    double totalPrice =0.0;
    int i;
    int j;
    for(i=0; i<numOfing;i++){
        scanf("%lf", &array[i]);
    }
    for(j=0; j<numOfing; j++){
        scanf("%lf", &weight);
        priceofI = array[j]*weight;
        totalPrice += priceofI;
    } 
    printf("%lf", totalPrice);
    
}
