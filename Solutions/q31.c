/*
Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
*/
#include <stdio.h>
int main(){
	int year;
	printf("Enter Year: ");
	scanf("%d", &year);
	if (year % 400 == 0){
		printf("It is leap year\n");
	}else if(year % 100 != 0 && year % 4 == 0){
		printf("It is leap year\n");
	}else{
		printf("It is not a leap year\n");
	}
	return 0;
}