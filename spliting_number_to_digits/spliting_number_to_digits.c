#include <stdio.h>
#define size 5

int main()
{
    int var,arr[size],digit,i=0,j;
    
    printf("Enter a number which has maximum 5 digit: ");
    scanf("%d",&var);
    
    while(var>0)
    {
        digit=var%10;
        arr[i]=digit;
        var=var/10;
        i++;
    }
    
    for(j=0;j<i;j++)
    {
        printf("Digit %d is: %d\n",j+1,arr[j]);

    }
    
    //var:12345
    //first iteration:
    //digit = 12345 % 10 = 5 -> finding the last digit
    //arr[i] = 5 ; keeping this digit into array index
    //var = 12345 / 10 = 1234 > continue with the rest of the number
    //i++ -> index is incereasing for keeping the next digit of the number
    
    //second iteration:
    //digit = 1234 % 10 = 4 
    //arr[i] = 4 ; 
    //var = 1234 / 10 = 123 > 
    //i++ -> 
    
    //third iteration:
    //digit = 123 % 10 = 3
    //arr[i] = 3 ; 
    //var = 123 / 10 = 12 > 
    //i++ -> 
    
    //fourth iteration:
    //digit = 12 % 10 = 2
    //arr[i] = 2 ; 
    //var = 12 / 10 = 1 > 
    //i++ -> 
    
    //fifth iteration:
    //digit = 1 % 10 = 1
    //arr[i] = 1 ; 
    //var = 1 / 10 = 0 > 
    //i is not increase, because var is 0, so loop will stop.
    
    return 0;
    
}
