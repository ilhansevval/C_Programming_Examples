#include <stdio.h>
#include <stdlib.h>

//Write a C program which generates even numbers between 1000 and 2000 and then prints them.

int main() {
	
	int i;
	
	for (i=1000; i<=2000; i++)
	{
		//even numbers divisible by 2
		if (i % 2 == 0)
		{
			printf("\n%d",i);
		}
	}
	

	return 0;
}
