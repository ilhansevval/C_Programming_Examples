#include <stdio.h>
#include <stdlib.h>

//When user enter an amount from keyboard, calculating the minimum number of banknotes.

int main() {
	
	int amount, total;
	
	printf("Enter an amount: ");
	scanf("%d",&amount);
	
	//Finding the number of 100 banknotes
	total = (int)amount/100;
	
	printf("\n There are:  \n\n %d Banknote(s) of 100 \n", total);
	
	//Finding the number of 50 banknotes
	amount = amount-(total*100); //when you drop it away the multiples of 100 you can calculate how many 50 banknote left from rest of them 
					//and the the result is will be 50, because when you multiply 50 with a random number, the result is equals to multiples of 100
	
	total = (int)amount/50;  //50 divide by 50 is equals to 1
	
	printf("\n %d Banknote(s) of 50 \n", total);
	
	//Finding the number of 20 banknotes
	amount = amount-(total*50);
	
	total = (int)amount/20;
	
	printf("\n %d Banknote(s) of 20 \n", total);
	
	//Finding the number of 10 banknotes
	amount = amount-(total*20);
	
	total = (int)amount/10;
	
	printf("\n %d Banknote(s) of 10 \n", total);
	
	//Finding the number of 5 banknotes
	amount = amount-(total*10);
	
	total = (int)amount/5;
	
	printf("\n %d Banknote(s) of 5 \n", total);
	
	//Finding the number of 1 banknotes
	amount = amount-(total*5);
	
	total = (int)amount/1;
	
	printf("\n %d Banknote(s) of 1 \n", total);
	
	return 0;
}
