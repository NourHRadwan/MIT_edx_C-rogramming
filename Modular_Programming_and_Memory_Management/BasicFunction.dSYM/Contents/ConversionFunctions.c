#include <stdio.h>
double meterConv (double);
double celsiusCon (double);
double gramConv (double);
int main(){
    int n; //the number of conversions to be made
    double value, conVule;
    int i;
    char unit;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
    scanf("%lf %c ", &value , &unit);
    if (unit == 'm')
    {
     conVule = meterConv (value);
     printf("%.6lf ft\n", conVule);
    }
    else if (unit == 'c'){
     conVule = celsiusCon (value);
     printf("%.6lf f\n", conVule);
    }
    else if (unit == 'g'){
     conVule = gramConv(value);
     printf("%.6lf lbs\n", conVule);
    }
    }

}
double meterConv (double v){
    double compute;
    compute = v * 3.2808;
    return (compute);
}
double celsiusCon (double v){
 double result;
 result = 32 + 1.8 * v;
return (result);
}
double gramConv (double v){
double conversion;
conversion =  0.002205 * v;
return (conversion);
}