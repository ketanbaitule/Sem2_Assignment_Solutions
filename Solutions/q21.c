/*
Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40 % of basic salary and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
*/
#include <stdio.h>

int main(){
	float basic, gross;
	printf("Enter Basic Salary: ");
	scanf("%f", &basic);
	gross = basic + (40 * basic / 100) + (20 * basic / 100);
	printf("Gross Salary: %f.\n", gross);
	return 0;
}