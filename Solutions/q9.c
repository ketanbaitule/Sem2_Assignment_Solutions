/*
Write a C program to check whether the given number is positive or negative
*/
#include <stdio.h>

int main(){
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	if (num > 0)
	{
		printf("Number is positive.\n");
	}else if(num == 0){
		printf("Number is zero\n");
	}else{
		printf("Number is negative\n");
	}
	return 0;
}