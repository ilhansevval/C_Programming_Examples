#include<stdio.h>

/*	
	   	    A
		   ABA
		  ABCBA
		 ABCDBCA
*/

int main(){
	
	int i, j, k, space, row_number, A;
	
	printf("Enter the row number: "); 
	scanf("%d", &row_number);
	printf("\n");
	
	space= row_number+20;
	
	for( i=1 ; i<=row_number ; i++ ){
		
		j = space;
		for( j ; j>0 ; j-- ){
			printf(" ");
		}
		
		A = 65;
		for( k=1; k<=i ; k++){
			printf("%c", A++);
		}
		
		A=A-1;
		k=k-1;
		
		for( k ; k>1 ; k-- ){
			printf("%c", --A);
		}
	
		printf("\n");
		space = space-1;
	}
	
	return 0;
}
