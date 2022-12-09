#include <stdio.h>
#define size 10

//Write a program that takes a 10-element array from the keyboard and writes it in reverse to the screen. 

int main() {
	
	int arr[size],i;
	
	printf("Enter %d elements of array\n",size);
	
	for(i=0;i<size;i++)
	{	
		printf("Enter the %d. element of array:",i + 1);
		scanf("%d",&arr[i]);
	}
		
	printf("Elements of array are: \n");
	for(i=0;i<size;i++)
	{
		printf("%d. element of array is: %d \n",i+1,arr[i]);
	}
	
	//size is 5, but index of size is 4, so it should be size minus -1
	printf("Reversed array elements: \n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d. element of array is %d \n",i+1,arr[i]);
	}	
	
	return 0;
}
