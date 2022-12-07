
#include <stdio.h>
#include <math.h> 
#define size 10

//Write a program that transfers the numbers given until -1 is entered from the keyboard, and then prints the square of each element to the screen. 
//(The number of array elements will be maximum 10.)

int main()
{
    int n, arr[size], i=0, j;
    printf("Enter the array elements, when its finished write -1 from keyboard");
    scanf("%d",&n); 
    
    while(n!=-1)
    {
        arr[i]=n;
        i++; 
		scanf("%d",&n); 
    }
    
	for(j=0;j<i;j++)
    {
        printf("\n%.0lf",pow(arr[j],2.0));
    }
		
    return 0;
}
