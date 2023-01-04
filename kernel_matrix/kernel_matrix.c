#include<stdio.h>
#define SIZE 10

int main(){
	
	int n, i, j, a, b, c, d, tempt=0;
	int matrixF[SIZE][SIZE], matrixG[SIZE][SIZE], kernel[3][3];

	printf("M x N (%dx%d):\n\n", SIZE,SIZE);
	for( i=0;i<SIZE;i++ ){
		for( j=0;j<SIZE;j++ ){
			n = rand() % 256;
			matrixF[i][j]=n;
			printf("%5d", n);
		}
		printf("\n");
	}
	
	printf("\n\n------------Matrix values are randomly assigned------------");
	
	printf("\n\nEnter 9 number for kernel matrix:\n");
	for( i=0;i<3;i++ ){
		for( j=0;j<3;j++)
			scanf("%d", &kernel[i][j]);
	}
		
	for( i=1;i<SIZE-1;i++ ){
		for(j=1;j<SIZE-1;j++){
			for( a=i-1,c=0,tempt=0 ; a<i+2 ; a++,c++ ){
				for( b=j-1 , d=0 ; b<j+2 ; b++,d++ )
					tempt += matrixF[a][b]*kernel[c][d]; 
			}
			matrixG[i][j] = tempt;	
		}
	}	
	
	printf("\nFiltered Output (%dx%d):\n\n", SIZE-2,SIZE-2);
	for( i=1 ; i<SIZE-1 ; i++ ){
		for( j=1 ; j<SIZE-1 ; j++ )
			printf("%5d ", matrixG[i][j]);
		printf("\n");
	}
	
	return 0;
}
