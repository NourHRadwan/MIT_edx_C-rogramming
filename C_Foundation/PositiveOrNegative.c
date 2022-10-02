#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n > 0)
    {
    write(1,"The number is positive",22);
    }
    else if ( n == 0)
    {
    write(1,"The number is zero",18); 
    }
    else  
    {
    write(1,"The number is Negative",22); 
    }
	return (0);
}