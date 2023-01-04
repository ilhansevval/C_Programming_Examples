#include<stdio.h>

/*
		4 4 4 4 4 4 4
		4 3 3 3 3 3 4
		4 3 2 2 2 3 4
		4 3 2 1 2 3 4
		4 3 2 2 2 3 4
		4 3 3 3 3 3 4
		4 4 4 4 4 4 4...
*/

int main(){
	
	int a, b, i, j, k;
	printf("Enter a value: "); 
	scanf("%d", &a);
	printf("\n\n");
	
	k= a*2-1;
	b=a;
	
	for( i=0; i<a ; i++ ){
			
		b=a;
		for( j=1 ; j<=i ; j++ ){
			printf("%2d", b--);
		}
		
		for( j=1 ; j<=k-i*2 ;j++){
			printf("%2d", b);
		}
		
		for( j=1 ; j<=i ; j++ ){
			printf("%2d", ++b);
		}
		printf("\n");
	}	
	
	i=i-2;
	
	for( i ; i>=0; i-- ){
		
		b=a;
		for( j=1 ; j<=i ; j++ ){
			printf("%2d", b--);
		}
		for( j=1 ; j<=k-i*2 ;j++){
			printf("%2d", b);
		}
		for( j=1 ; j<=i ; j++ ){
			printf("%2d", ++b);
		}
		printf("\n");	
	}
	
	return 0;
}
