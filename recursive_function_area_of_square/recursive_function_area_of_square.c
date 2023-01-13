#include <stdio.h>


int square_area(int x)
{
	return x*x;
}
	
int main(){
		
	int a;
		
	printf("Enter the edge of square: ");
	scanf("%d",&a);
		
	printf("\nThe Area of Square is %d",square_area(a));
		
	return 0;
		
}	
