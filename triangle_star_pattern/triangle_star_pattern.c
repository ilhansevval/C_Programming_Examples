#include<stdio.h>

/*
 	Triangle Star Pattern
 	
	 		*	*   
 			**  **
			*** ***
 			********
*/

int main(){
	
	int i,j,k,l;
	l=4;
	
	for( i=1; i<=4 ; i++){
		
		for( j=1; j<=i ; j++){
			printf("*");
		}
		k=l;
		for( k; k>1 ; k-- ){
			printf(" ");
		}
		for( j=1; j<=i; j++ ){
			printf("*");
		}
		printf("\n");
		
		l=l-1;
	}
	
	return 0;
}

