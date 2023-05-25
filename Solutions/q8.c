/*
Write a C program to add & multiply two numbers
*/
#include <stdio.h>

int main(){
	int num_1, num_2, sum;
	long int multiply;
	printf("Enter num 1: ");
	scanf("%d", &num_1);
	printf("Enter num 2: ");
	scanf("%d", &num_2);
	sum = num_1 + num_2;
	multiply = num_1 * num_2;
	printf("Sum of 2 number: %d\n", sum);
	printf("Multiply of 2 number: %d\n", multiply);
	return 0;
}