#include<stdio.h>

/*
	Print Pascal triangle upto n rows.
	
         					  1
                           1    1
                        1    2    1
                     1    3    3    1
                  1    4    6    4    1
				           ... 
*/

int main(){
	
	int row,column,space,i,j,x,y,fact_row=0,fact_col=0,fact_minus=0,formula;

	puts("\n***************Pascal Triangle***************\n");
	printf("Enter the row number: "); 
	scanf("%d",&row);
	
	x=row;
	
	for(i=0;i<=row-1;i++)
	{
		space=x+5;
		for(space;space>0;space--)
		{
			printf("   ");
		}
		
		if(i==0)
			printf("1"); 
		
		for(column=0;column<=i;column++)
		{
			if(i!=0&&column==0)
				printf("1  ");
			if(i==column&&i!=0)
				printf("  1");
			
			if((i!=0&&i!=column)&&column!=0)
			{
				fact_row = 1;
				for(j=1;j<=i;j++)
				{
					fact_row *= j;
				}	
			
				fact_col = 1;
				for(j=1;j<=column;j++)
				{
					fact_col *= j;
				}
			
		 		y=i-column;
				fact_minus = 1;
				for(j=1;j<=y;j++)
				{
					fact_minus*=j;
				}	
			
				formula=fact_row/(fact_col*fact_minus); 
				printf("  %d  ", formula);
			}
		}
			printf("\n");
			x = x-1;
	}
	
	return 0;
}

