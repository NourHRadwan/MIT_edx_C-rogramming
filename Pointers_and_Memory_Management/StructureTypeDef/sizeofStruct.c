#include <stdio.h>

struct student{
	char firstName[5];
	char lastName[5];
	int birthYear;
	double aveGrade;
};

int main()
 {
	struct student me;
    printf("Size of struct student is %lu.\n", sizeof(struct student));
    printf("Size of firstName is %lu.\n", sizeof(me.firstName));
    printf("Size of lastName is %lu.\n", sizeof(me.lastName));
    printf("Size of birthYear is %lu.\n", sizeof(me.birthYear));
    printf("Size of aveGrade is %lu.\n", sizeof(me.aveGrade));

	return 0;
}
