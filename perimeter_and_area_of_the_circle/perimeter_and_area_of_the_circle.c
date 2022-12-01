#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int var, radius;
	float pi,perimeter,area;
	
	pi = 3.14;
	
	printf("Write a number: ");
	scanf("%d",&var);
	
	//perimeter of the circle
	if (var == 1)
	{
		printf("Write the radius number: ");
		scanf("%d",&radius);
		
		perimeter = 2 * pi * radius;
		
		printf("The perimeter of circle is %.2f",perimeter);
	}
	
	//area of the circle
	else if (var == 2)
	{
		printf("Write the radius number: ");
		scanf("%d",&radius);
		
		area = pi * radius * radius;
		
		printf("The area of circle is %.2f",area);
	}
	
	else 
		printf("Wrong Input");
	
	return 0;
}
