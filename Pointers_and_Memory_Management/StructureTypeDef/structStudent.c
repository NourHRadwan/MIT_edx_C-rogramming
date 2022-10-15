#include <stdio.h>
struct student
{
 char firstName[10];
 char lastName[10];
 int age;
 double gpa;
};
void readStrcut (struct student *studptr);
void printStruct (struct student);
int main(){
    struct student one;
    struct student two;
    readStrcut(&one);
    readStrcut(&two);
    printStruct(one);
    printStruct(two);
return (0);
}
//This function pass struct by pointer
void readStrcut (struct student *studptr)
{
    printf("\nEnter a new student record: \n");
    printf("First name: ");
    scanf("%s",(*studptr).firstName);
    printf("Last name: ");  
    scanf("%s",(*studptr).lastName);
    printf("Student Age: ");
    scanf("%d",&(*studptr).age);
    printf("GPA: ");
    scanf("%lf",&(*studptr).gpa);
} 
// This function pass struct by value.
void printStruct (struct student stud)
{
        printf("student Name is %s %s,he has %d years and GPA of %.2lf\n", stud.firstName, stud.lastName, stud.age, stud.gpa);
}