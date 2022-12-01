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

	
	//Swapping Two Numbers Without Using Third Variable: Method 1 Using Arithmetic Operator
	int var3, var4;
	
	printf("\n Enter two integer: ");
	scanf("%d %d", &var3, &var4);
	
	printf("Before Swapping \n First variable: %d \n Second variable: %d \n", var3, var4);
	
	var3 = var3 + var4;
	var4 = var3 - var4;
	var3 = var3 - var4;
	
	printf("After Swapping \n First variable: %d \n Second variable: %d \n", var3, var4);
	
	//Swapping Two Numbers Without Using Third Variable: Method 2 Using Arithmetic Operator
	int var5, var6;
	
	printf("\n Enter two integer: ");
	scanf("%d %d", &var5, &var6);
	
	printf("Before Swapping \n First variable: %d \n Second variable: %d \n", var5, var6);
	
	var5 = var5 * var6;
	var6 = var5 / var6;
	var5 = var5 / var6;
	
	printf("After Swapping \n First variable: %d \n Second variable: %d \n", var5, var6);

	//Swapping Two Numbers Without Using Third Variable: Method 3 Using Bitwise XOR
	int var7, var8;
	
	printf("\n Enter two integer: ");
	scanf("%d %d", &var7, &var8);
	
	printf("Before Swapping \n First variable: %d \n Second variable: %d \n", var7, var8);
	
	var7 = var7 ^ var8;
	var8 = var7 ^ var8;
	var7 = var7 ^ var8;
	
	printf("After Swapping \n First variable: %d \n Second variable: %d \n", var7, var8);

	return 0;
}
