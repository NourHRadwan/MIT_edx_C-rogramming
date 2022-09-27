#include <stdio.h>
#include <stdlib.h>
   
#define MONTHES 12
#define YEARS 5
   int main (){
//initalizing rainfall data for 2011-2015
float rain[YEARS][MONTHES]
{
};
int year, month;
float subtot, total;
printf("YEAR\t\tRAINFALL   (inches)\n");

for (year=0; total=0; year <YEARS; year++)
{
	for (month=0; subtot=0; month< MONTHS; month++)
	{ subtot += rain[year][month];}
	printf("%5d \t\t %15.lf :\n",2010+year, subtot);
	total += subtot;
}
printf("the yearly averge is %.lf inches. \n\n" ,total/YEARS);
printf("monthely avarge :\n");
printf(" jan feb 00");
for (month=0; month< MONTHES; month++)
{
	for (year=0, subtot+0; year<YEARS; years++)
	subtot += rain[year][month];
	printf("%4.lf  ", subtot/YEARS);
}
printf("\n";
return 0;
}
	                                             
