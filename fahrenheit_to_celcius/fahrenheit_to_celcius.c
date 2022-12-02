#include <stdio.h>
#include <stdlib.h>

//Convert Temperature from Fahrenheit to Celsius

int main() {
	
	float fahrenheit,celcius;
	
	printf("Enter the temperature: ");
	scanf("%f",&fahrenheit);
	
	//fahrenheit to celcius formula;
	celcius = (fahrenheit - 32) * 5/9;

	printf("\n%f fahrenheit is equals to %f celcius",fahrenheit,celcius);
	
	return 0;
}
