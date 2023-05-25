/*
If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100. 
*/
#include<stdio.h>

int main()
{
	int mark_1, mark_2, mark_3, mark_4, mark_5;
	printf("Enter Marks of subject 1, subject 2, subject 3, subject 4, subject 5: ");
	scanf("%d %d %d %d %d", &mark_1, &mark_2, &mark_3, &mark_4, &mark_5);
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