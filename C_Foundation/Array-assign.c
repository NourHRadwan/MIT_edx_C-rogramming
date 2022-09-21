#include <stdio.h>
int main(void)
{
    int array[9];
    int readValue=0;
    int cellNumber =0;
    int i=0; //for the loop
    for (i=0; i<10;i++)
    {
        scanf("%d", &readValue);
        array[cellNumber]= readValue;
        cellNumber = cellNumber+1;
    }
    scanf("%d", &cellNumber);
    printf("%d", array[cellNumber]);
    return 0;
}
