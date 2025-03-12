//Write a program to define biggest and smallest numbers in an array
#include <stdio.h>
int main() 
{
    //Declare variables
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ");
    //Declare array
    int arr[n];
    //Loop into array to get numbers
    for(int i = 0; i < n; i++)
    { 
        scanf("%d", &arr[i]);
    }
    //Declare max and min    
    int max = arr[0], min = arr[0];
    //Loop to find the biggest and smallest numbers
    for (int i = 1; i < n; i++)
    { 
        //Check if the number is bigger than the max
        if (arr[i] > max)
            max = arr[i];
            //Check if the number is smaller than the min
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Biggest number = %d\nSmallest number = %d\n", max, min);
    //sort the array
    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j < n -1; j++)
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    //Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    { 
        printf("%d ", arr[i]);
    }

}