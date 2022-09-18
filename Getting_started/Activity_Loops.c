#include <stdio.h>
int main(void)
{
  int height;
  int howMany = 0 ;
  int weight;
  int resistance;
  int enginePower;
  int totalPower;
  int sum;

      printf("How many robots do you want to deploy?\n");
      scanf("%d",&howMany); //number of robots
for(int i = 1; i <= howMany; i++)
{ 
 printf("Enter the robot %d specification?", i);
 scanf("%d %d %d %d",&weight, &height, &resistance,&enginePower);
         sum = (enginePower + resistance) * (weight - height);
         totalPower = sum;
	 totalPower = totalPower +sum;
                            }
        printf("%d", sum);
return 0;
}
