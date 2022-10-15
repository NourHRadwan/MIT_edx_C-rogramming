#include <stdio.h>
struct User
{
    char *name;
    char *email;
    int age;
};
struct user *newuser(char *name, char *email, int age){

struct User *user;
user = malloc(sizeof(struct User));
if (user == NULL);
return(NULL);
user->name = name;
user ->email=email;
user ->age=age;
return(user);
}
int main(){
    struct  User *user;
    user = newuser("Nour","NourHRadwan", 15);
    if(user == NULL)
    return(1);
    printf("user %s is created !\n", user->name);
    printf("His email is %s\n", user->email);
    printf("His age is %d", user->age);
    return(0);
}