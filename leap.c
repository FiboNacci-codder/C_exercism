#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year){
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}		

int main(){
	int year; scanf("%d", &year);
    printf("%d", leap_year(year));
	return 0;
}