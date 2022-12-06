#include <stdio.h>
#include <math.h>

//Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].

int main() {
	
	int range,x;
	
	float sum = 0;
	
	float i,power;
	
	printf("Enter the x value: ");
	scanf("%d",&x);
	
	printf("Enter a range: ");
	scanf("%d",&range);
	
	power = x;
	
	for (i=1; i<=range; i++)
	{
		sum = sum + power / i;
		power = power * x;
	}
	
	printf("%.2f", sum);
		
	//x=3
	//range=2
	//sum=0
	//power=3
	
	//first iteration:
	//sum = 0 + 3/1 = 3
	//power = 3 * 3 = 9 -> this is the new x, because in problem, we use the power of x
	
	//second iteration:
	//sum = 3 + 9/2 = 7.5 -> this is the answer
	//power = 9 * 3 = 27 -> if the iteration be continued, this one will be used
	
	return 0;
}
