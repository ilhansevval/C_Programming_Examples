#include <stdio.h>
#define SIZE 10

//Write C Program to Concatenate Two Strings.

int main(){
	
	char str1[SIZE], str2[SIZE], i, j;
	
	printf("Enter the first string: ");
	gets(str1);
	//sevval
	
	printf("Enter the second string: ");
	gets(str2);
	//ilhan
	
	for(i=0; str1[i] != '\0'; i++);
	//sevval(null)
	
	for(j=0; str2[j] != '\0'; j++)
	{
		str1[i++] = str2[j];
	}
	/*
	
	first iteration:
	sevval(null)i
	
	second iteration:
	sevval(null)il
	
	third iteration:
	sevval(null)ilh
	
	fourth iteration:
	sevval(null)ilha
	
	fifth iteration:
	sevval(null)ilhan
	
	sixth iteration:
	sevval(null)ilhan(null) -> stop
	
	*/
	
	puts(str1);
	
	return 0;
	
}
