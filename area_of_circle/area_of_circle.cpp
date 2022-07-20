#include <stdio.h>
float PI = 3.14;

float square(const int r){
	return PI * r * r;
}
int main(){
	
	float radius;
	
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	
	float daire = square(radius);
	printf("\nArea of Circle: %.2f", daire);
}
