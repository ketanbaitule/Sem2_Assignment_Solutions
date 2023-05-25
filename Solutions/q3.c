/*
Write a program to assume the marks of five subject and calculate average and percentage of student.
*/
#include<stdio.h>

int main()
{
	int mark_1 = 50, mark_2 = 70, mark_3 = 60, mark_4 = 80, mark_5 = 90;
	int sum;
	float average, percentage;
	sum = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;
	average = sum / 5;
	// Assuming Total Mark of Each Subject = 100
	percentage = sum * 100 / 500;
	printf("The average Marks are %f.\n", average);
	printf("The percentage is %f %.\n", percentage);
	return 0;
}