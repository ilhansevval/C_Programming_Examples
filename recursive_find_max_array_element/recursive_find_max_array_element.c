#include<stdio.h>
#define MAX 100

//Girilen dizideki en buyuk elemani bulan recursive programi bulma.

int getMaxElement(int []);  //takes array of int as parameter

int size;

int main(){
	
    int arr[MAX], max, i;
    printf("Enter the size of the array: ");
    
    scanf("%d", &size);
    printf("Enter %d elements", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = getMaxElement(arr);   //passing the complete array as parameter
    printf("Largest element of the array is %d\n\n", max);
    return 0;
}

int getMaxElement(int a[]){
	
    static int i = 0, max =- 9999;  //static int max=a[0] is invalid
    
    if(i < size)   //till the last element
    {
        if(max < a[i])
        max = a[i];

        i++;    //to check the next element in the next iteration
        getMaxElement(a);   //recursive call
    }
    
    return max;
}

