#include <stdio.h>

//If the number's digits same such as 111, 2222, 33 which means that these are Karabuk number.
//Display that the entering value is Karabuk Number or not.


int main(){
	
	int  number,digit,value;
	
	printf("Enter an integer value: ");
	scanf("%d",&value);
	
	number = value;
	digit = value % 10;
	
	while(number > 0)
	{
		if(number%10==digit)
		{
			number = number / 10;
			if(number == 0)
			printf("%d is a Karabuk Number",value);
		}
		else
		{
			printf("%d is not a Karabuk Number",value);
			break;	
		}	
	}
	
	//true condition
	
	//value = 111
	//number = value = 111
	//digit = 111 % 10 = 1
	
	//first iteration:
	//number % 10 = 111 % 10 =  1 == digit : continue
	//number = number / 10 = 111 / 10 = 11
	
	//second iteration:
	//number % 10 = 11 % 10 = 1 == digit : continue
	//number = number / 10 = 11 / 10 = 1
	
	//third iteration:
	//number % 10 = 1 % 10 = 1 == digit : continue
	//number = number / 10 = 1 / 10 = 0 
	//when number equals to zero, it means that end of the loop.
	//and the number is provide the conditions of to be a Karabuk number.
	
	//false condition
	
	//value = 112
	//number = value = 112
	//digit = 112 % 10 = 2
	
	//first iteration:
	//number % 10 = 112 % 10 =  2 == digit : continue
	//number = number / 10 = 112 / 10 = 11
	
	//second iteration:
	//number % 10 = 11 % 10 = 1 != digit (2) : break
	//the number is not a Karabuk number.
	//because the digits is not same.
	
	return 0;
	
}
