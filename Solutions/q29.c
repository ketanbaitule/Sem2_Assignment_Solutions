/*
Write a program to find factorial value of any number entered through the keyboard.
*/
#include <stdio.h>
int main(){
	int num;
	long int fact = 1;
	printf("Enter Number: ");
	scanf("%d", &num);
	for (int i = num; i > 0; i--)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %ld.\n", num, fact);
}