#include <stdio.h>

//iki pozitif sayiyi kullanarak bu sayilarin en buyuk ortak bolenini recursive bir fonksiyon kullanarak bulma.

int gcd(int, int);

int main()
{
	int n1, n2;


	printf("Enter two positive integer number: ");
	scanf("%d %d", &n1, &n2);


	printf("Greatest Common Divisor of %d and %d is %d", n1, n2, gcd(n1,n2));

	return 0;
}


int gcd(int n1, int n2)
{
	if (n2 != 0)
	{
		return gcd(n2, n1 % n2);
	}
	else
	{
		return n1;
	}
}
