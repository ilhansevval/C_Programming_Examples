#include <stdio.h>

//Main fonksiyonu icerisinde verilen sayinin basamaklarinin toplamini recursive bir fonksiyon kullanarak bulma.

int sum(int);

int main()
{
	int number;
	int result;

	printf("Enter a Positive Integer Number: ");
	scanf("%d", &number);

	result = sum(number);

	printf("Sum of Digits %d", result);
	return 0;
}

int sum(int number)
{
	if (number != 0)
	{
		return (number % 10 + sum(number / 10));
	}
	else
	{
		return 0;
	}
}
