#include <stdio.h>
int main(void) {
    int sunny = 1; // try zero
    int vacation = 1; //try zero
    int sunAndVacation = sunny && vacation;
     // 1 && 1 : 1,  1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
    if (sunAndVacation) {
        printf("Yeah!!\n");
    } else {
        printf("Too bad!\n");
    }
    return 0;
}

