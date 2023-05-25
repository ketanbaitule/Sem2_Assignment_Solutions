/*
Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
*/
#include <stdio.h>

int main(){
	float F, C;
	printf("Enter Temp in Fahrenheit: ");
	scanf("%f", &F);
	C = 5 * (F - 32) / 9;
	printf("Temp in Centigrade: %f.\n", C);
	return 0;
}