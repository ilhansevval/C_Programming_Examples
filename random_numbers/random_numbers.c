#include <stdio.h>
#include <time.h>

//random number generator in c

int main()
{
	
	int var,i;
	
	srand(time(NULL));
	
	printf("Ten random numbers between 1 to 100\n");
	
	for(i=1;i<=10;i++)
	{
		var = rand() % 100 + 1;
		printf("%d. random number is %d\n",i,var);
	}
	
	return 0;
}
