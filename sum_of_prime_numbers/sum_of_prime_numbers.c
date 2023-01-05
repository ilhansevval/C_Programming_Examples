#include<stdio.h>

//Find sum of all prime numbers between 1 to n.

int main(){
	
	int n,temp,x,sum=0;
	
	puts("When you enter a number, Finding the sum of prime numbers from 1 to the number you entered\n(Your number will be include to addition)\n");
	printf("\nEnter a number: ");
	scanf("%d", &n);
	
	for(temp=1;temp<=n;temp++){
		
		x=2;
		while(x<=temp)
		{
			if(temp%x== 0)
			{
				if(temp==x)
				{
					sum+=temp;	
					break;
				}
				else
					break;	
			}
			else
				x++;	
		}			
	}
	
	printf("\nSummation of prime numbers: %d", sum);
		
	return 0;
	
}
