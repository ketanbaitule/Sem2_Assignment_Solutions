/*
Write a program to calculate overtime of 10 employees. Overtime is paid at the rate of Rs. 1200 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
*/
#include <stdio.h>

int main()
{
	int working_hour, overtime_hour, employee = 1;
	long int pay;
	while(employee <= 10){
		printf("Enter Working Hour for Employee %d: ", employee);
		scanf("%d", &working_hour);
		overtime_hour = working_hour - 40;
		if (overtime_hour > 0)
		{
			pay = overtime_hour * 1200;
			printf("Overtime Payment = %ld.\n", pay);
		}else{
			printf("Employee %d did not work overtime.\n", employee);
		}
		employee++;

	}
	return 0;
}