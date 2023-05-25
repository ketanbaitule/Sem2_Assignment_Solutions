/*
Write a programme to calculate the sum of even numbers. 10 numbers are entered by the user.
*/
#include <stdio.h>

int main(){
	int num, sum = 0;
	for (int i = 1; i <= 10; ++i)
	{
		printf("Enter number %d : ", i);
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			sum+=num;
		}
	}
	printf("Sum of even no. entered: %d\n", sum);
}