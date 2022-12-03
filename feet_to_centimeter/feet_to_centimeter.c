#include <stdio.h>
#include <stdlib.h>


//Convert The Length Of Feet To Centimeter.

int main() {
	
	float feet,centimeter;
	
	printf("Enter the feet value: ");
	scanf("%f",&feet);
	
	//feet to centimeter formula;
	centimeter = feet * 30.48;
	
	printf("\n%f feet values is equals to %f centimetre",feet,centimeter);
	
	return 0;
}
