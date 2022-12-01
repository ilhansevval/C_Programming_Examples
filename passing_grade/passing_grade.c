#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int id,midterm,final,average;
	
	printf("Enter your student id: ");
	scanf("%d",&id);
	
	printf("\nEnter your midterm mark: ");
	scanf("%d",&midterm);
	
	printf("\nEnter your final mark: ");
	scanf("%d",&final);
	
	//Calculating the passing grade according to given formula;
	average = midterm*0.4 + final*0.6;
	
	printf("\nPassing grade of student number %d is: %d",id,average);
	
	return 0;
}
