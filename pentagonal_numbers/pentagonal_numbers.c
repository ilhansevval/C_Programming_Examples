#include <stdio.h>
#define size 100

//Pentagonal numbers are produced according to the formula Pn=n(3n?1)/2. Display pentagonal numbers less than 100 to the screen. 

int main(){
	
	int i,arr[size],count=10;
	
	for(i=1;i<size;i++)
	{
		arr[i]=i*(3*i-1)/2;
		
		if(arr[i] < 100)
		{
			printf("%d\t",arr[i]);
		}
		count++;
	}
		
	return 0;
	
}
