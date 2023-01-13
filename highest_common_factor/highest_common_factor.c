#include<stdio.h>

//Find HCF (Highest Common Factor) of two numbers.

int main(){
	
	int num1,num2,temp,hcf;
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	for(temp = 1; temp <= num1 && temp <= num2; temp++)
	{
		if(num1%temp==0 && num2%temp==0)
			hcf = temp;
	}
	
	printf("EBOB: %d",hcf);
	
	return 0;
		
}
