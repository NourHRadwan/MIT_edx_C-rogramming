#include <stdio.h>
int min(int, int);
int main(){
int n; // number of value to be tested
int i, k, j; 
int minValue = 0;
scanf("%d", &n);
scanf("%d %d", &k, &j);
minValue = min (k , j);
for (i = 2; i < n; i++)
{
scanf("%d", &k);
minValue = min (k , minValue);
}
printf("%d", minValue);
}

int min(int x, int y){
if (x < y)
return x;
else 
return y;
}