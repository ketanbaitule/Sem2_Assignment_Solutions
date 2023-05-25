/*
Write a programme to count the number of students with distinction (>=75%)marks. 10 students have entered their percentage score.
*/
#include <stdio.h>

int main(){
	int count = 0;
	float percentage;
	for (int i = 1; i <= 10; ++i)
	{
		printf("Enter percentage of student %d : ", i);
		scanf("%f", &percentage);
		if (percentage >= 75)
		{
			count++;
		}
	}
	printf("Number of students with distinction: %d\n", count);
}