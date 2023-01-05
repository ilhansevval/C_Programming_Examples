#include<stdio.h>

//convert a binary number into a decimal number without using array, function and while loop

int main(){
	
	int binary;
	int i, j, pow, base;
	int decimal = 0;
	
	puts("\n***********Converting Binary Number to a Decimal Number***********\n");
	printf("Enter your binary number: "); 
	scanf("%d", &binary);
	
	for( i=0 ; binary!=0 ; i++ ){
		
		pow = 1 , base =2;	
		for( j=1 ; j<=i ; j++){
			pow *= base;
		}
		if( binary%2==1 )
			decimal += pow;
		
		binary /= 10;
		
	}
	
	printf("\nDecimal number: %d",binary,decimal);
	
	return 0;
}
