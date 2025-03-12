//Write a program that accepts the following numbers in an array and reverses the
//array.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    
    printf("Enter number of elements in array: \n");
    int result = scanf(" %d", &n); 
    if (result != 1) {
        printf("Error reading input.\n");
        return 1;}
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("Error in allocating memory");
    }
    printf("Enter numbers in array:\n", &n);
    for(int i =0; i< n ; i++)
    {
    scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i]= arr[n -i -1];
        arr[n-i-1]= temp;
        }

    printf("Reverse array: \n");
    for ( int i = 0; i < n ; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}

