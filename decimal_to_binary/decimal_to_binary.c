#include<stdio.h>

//Convert a decimal number into binary without using an array.

int main(){
	
	int decimal;
	
	puts("\n*************Converting Decimal Number to a Binary Number*************\n");
	printf("Enter your Decimal Number: ");
	scanf("%d", &decimal);
	
	int result = 0;
	int a = 1;
	
	while(decimal > 0)
	{	
		result += (decimal%2)*a;
		a = a*10;
		decimal /= 2;
	}
	
	printf("\nSonuc: %d", result);

	return 0;
}
