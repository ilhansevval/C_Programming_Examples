#include <stdio.h>
#include <stdlib.h>

//Write a C program to check whether a given number from keyboard is Palindrome number or not.

//Palindrome number same after reverse like 121, 11, 23532

int main() {
	
	int number,last_digit,temp;
	
	int reversed = 0;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	temp = number;
	
	while (number != 0)
	{
		last_digit = number % 10; 
		reversed = reversed * 10 + last_digit;
		number = number / 10;
	}
	
	//number = 121
	//reversed = 0
	//temp = 121
	
	//first iteration:
	//last digit = 121 % 10 = 1, 
	//reversed = 0 * 10 + 1 = 1,
	//number = 121 / 10 = 12
	
	//second iteration:
	//last digit = 12 % 10 = 2, 
	//reversed = 1 * 10 + 2 = 12,
	//number = 12 / 10 = 1
	
	//third iteration:
	//last digit = 1 % 10 = 1, 
	//reversed = 12 * 10 + 1 = 121,
	//number = 1 / 10 = 0
	
	//reversed = temp
	
	
	if (reversed == temp)
        printf("\n%d is a palindrome number",temp);
    else
        printf("\n%d is not a palindrome number",temp);
	
	return 0;
}
