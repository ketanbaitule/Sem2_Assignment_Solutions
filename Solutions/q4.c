/*
Write a program to calculate over time pay of 10 Employees using while loop. (Given: Overtime rate is Rs 12.00 per hour, working hours about 40 hours per week.)
*/
#include <stdio.h>

int main()
{
	int working_hour, pay, overtime_hour;
	int employee = 1;
	while(employee <= 10){
		printf("Enter Working Hour for Employee %d: ", employee);
		scanf("%d", &working_hour);
		overtime_hour = working_hour - 40;
		if (overtime_hour > 0)
		{
			pay = overtime_hour * 12;
			printf("Overtime Payment = %d.\n", pay);
		}else{
			printf("Employee %d did not work overtime.\n", employee);
		}
		employee++;

	}
	return 0;
}