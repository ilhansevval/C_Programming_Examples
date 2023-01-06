#include<stdio.h>

//Print multiplication table of any number.

int main(){
	
	int number,temp,mult;
	
	puts("\n*****Multiplication Table*****\n");
	printf("Enter a number: ");
	scanf("%d",&number);
	
	temp=1;
	
	while(temp<=10)
	{
		mult=temp*number;
		printf("%d * %d = %d\n",number,temp,mult);
		temp++;
	}
	
	return 0;
	
}
