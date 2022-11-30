#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Swapping Two Numbers Using Third Variable
	int var1, var2, temp; 
	
	printf("Enter two integer: ");
	scanf("%d %d", &var1, &var2);
	
	printf("Before Swapping \n First variable: %d \n Second variable: %d \n", var1, var2);
	
	temp = var1;
	var1 = var2;
	var2 = temp;
	
	printf("After Swapping \n First variable:  %d \n Second variable = %d \n", var1, var2);

	
	//Swapping Two Numbers Using Without Using Third Variable
	int var3, var4;
	
	printf("\n Enter two integer: ");
	scanf("%d %d", &var3, &var4);
	
	printf("Before Swapping \n First variable: %d \n Second variable: %d \n", var3, var4);
	
	var3 = var3 + var4;
	var4 = var3 - var4;
	var3 = var3 - var4;
	
	printf("After Swapping \n First variable: %d \n Second variable: %d \n", var3, var4);

	return 0;
}
