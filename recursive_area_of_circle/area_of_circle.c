#include <stdio.h>

float pi = 3.14;

float area(const int r){
	return pi * r * r;
}
int main(){
	
	float radius;
	
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	
	float circle = area(radius);
	printf("\n Area of Circle: %.2f", circle);
}
