#include <stdio.h>
#include <stdbool.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void printDate(struct date dateptr)
{
    printf("%d/%02d/%d", dateptr.month, dateptr.day, dateptr.year);
}
void readDate(struct date *today)
{
        scanf("%d %d %d", &today->year, &today->month, &today->day);
}
struct date advanceDay(struct date today)
{
    struct date *tomorrow;
    (*tomorrow).day = today.day + 1;
    int leapdays = 31;
    bool leapyear = false;
    if (leapyear % 4 == 0 && leapyear % 400 == 0)
    {
        leapyear = true;
    }
    if (leapyear % 100 == 0)
    {
        leapyear = false;
    }
    if ((leapyear) && (today.month == 12 || today.month == 1|| today.month == 3 || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10 ))
    {
        leapdays = 31;
    }
    if ((leapyear) && (today.month == 11 || today.month == 2 || today.month == 4 || today.month == 6 || today.month == 9))
    {
        leapdays = 30;
    }
    if ((leapyear) && (today.month == 2 )) 
    {
        leapdays = 29;
    }
    else if ((leapyear == false) && (today.month == 2)) {
        leapdays = 28;
    }
    return(*tomorrow);
}