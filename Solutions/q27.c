/*
If the ages of Ram, Shyam and Ajay are input through the keyboard, Write a program to determine the youngest of the three.
*/
#include <stdio.h>

int main(){
	int ram, shyam, ajay;
	printf("Enter age of Ram, Shyam and Ajay: ");
	scanf("%d %d %d", &ram, &shyam, &ajay);
	if (ram < shyam)
	{
		if (ram < ajay)
		{
			printf("Ram is youngest.\n");
		}else{
			printf("Ajay is youngest\n");
		}
	}else{
		if (shyam < ajay)
		{
			printf("Shyam is youngest.\n");
		}else{
			printf("Ajay is youngest\n");
		}
	}
	return 0;
}