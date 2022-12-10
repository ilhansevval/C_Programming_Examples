#include <stdio.h>

//There is 5 student and everyone has 8 exam.
//Use 2 dimensional array to keep the results.

int main()
{
	
	int student_table[5][8],i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%d exam of ",j+1);
			printf("student number %d: ",i+1);
			scanf("%d",&student_table[j][i]);
		}
	}	
	
	return 0;
}
