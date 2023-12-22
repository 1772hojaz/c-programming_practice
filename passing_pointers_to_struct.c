#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int year;
	int month;
	int day;
} date;

int main(void){
	date *today;
	today = (date*)malloc(sizeof(date));


	(*today).day = 21;
	(*today).month = 12;
	(*today).year = 2023;
	printf("the date is %d/%d/%d\n",today->day, today->month, today->year);
	free(today);
	return 0;
}
