#include<stdio.h>
#include<math.h>
#define SIZE 100

//Standard Deviation

int main(){
	
	int i, j, array[SIZE];
	float sum=0 , average=0 , standard_deviation=0;
	
	printf("---------------Calculation of Standard Deviation---------------");
	printf("\n\nEnter the values: (for stopping press on the -1)\n\n");
	
	for( i=0 ; i<SIZE ; i++ ){
		printf("%d) ", i+1);
		scanf("%d", &array[i]);
		if( array[i]==-1 )
			break;
		average += array[i];
	}
	average = average/i;
	average=0;

	for( j=0 ; j<i ; j++ ){
		average += pow( (array[j]-average),2 );
	}
	standard_deviation = sqrt( average/ (i-1) );
	printf("\nStandard Deviation of all this values is %.3f", standard_deviation );
	
	return 0;
}
