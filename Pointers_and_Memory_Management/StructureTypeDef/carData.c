#include<stdio.h>
struct {
char *engine;
} car1, car2;

int main(){
car1.engine = "DDd 1986 dd";
car2.engine = "lmcdcc 1773";   
printf("%s", car1.engine);
printf("%s", car2.engine);
return(0);
}