#include <stdio.h>
#include <stdlib.h>

//Write a C program for computing factorial N (N!).

int main() {
	
	int i,number;
	
	int fact=1;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	for (i=1; i<=number; i++)
	{
		fact = fact*i;
	}
	
	//number=4
	//fact=1
	//i=1
	
	//first iteration: 
	//fact = 1 * 1 = 1
	
	//second iteration: 
	//fact = 1 * 2 = 2
	
	//third iteration: 
	//fact = 2 * 3 = 6
	
	//last iteration: 
	//fact = 6 * 4 = 24
	
	printf("\nFactorial of %d is %d",number,fact);
		
	return 0;
}
