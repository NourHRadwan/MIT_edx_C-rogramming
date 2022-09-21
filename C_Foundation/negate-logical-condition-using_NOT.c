include <stdio.h>
int main(void) {
    int sunny = 0; // 0: cloudy, other value (1 for example): sunny
    int vacation = 1; // 0: working , other value (1 for example): vacation
    int NOTsunnyANDvacation = !sunny && vacation;
    int NOTsunny = !sunny;
    if (NOTsunny){
        printf("It's cloudy!\n");
    }
    if (NOTsunnyANDvacation){
        printf("It's cloudy but at least I am on vacation!\n");
    }
    return 0;
}
