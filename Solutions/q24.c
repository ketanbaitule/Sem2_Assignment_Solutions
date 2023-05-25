/*
If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
*/
#include <stdio.h>
int main(){
	int cp, sp, loss, profit;
	printf("Enter Cost Price and Selling Price: ");
	scanf("%d %d", &cp, &sp);
	if (cp > sp)
	{
		loss = cp - sp;
		printf("Loss of %d occurred.\n", loss);
	}else if(cp < sp){
		profit = sp - cp;
		printf("Profit of %d occurred.\n", profit);
	}else{
		printf("No Loss or Profit.\n");
	}
	return 0;
}