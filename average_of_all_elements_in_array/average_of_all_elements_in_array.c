#include <stdio.h>
#define size 8

//Enter a value from the keyboard to the 8-element float array. Calculate the average of the entered values and print it on the screen.

int main() {
	
	float array[size],sum = 0.0,avg;
	
	int i;
	
	for(i=0; i<size; i++)
	{
		printf("Enter the %d. value of array: ", i + 1);
        scanf("%f", &array[i]);
        sum += array[i];
        avg = sum / 8;
	}
	
	printf("Average of the array is: %.2f",avg);
	
	return 0;
}
