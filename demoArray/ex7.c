//Write a program to arrange the following names in alphabetical order.

#include <stdio.h>
#include <string.h>
int main()
{   
    
    char *names[] = {"George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William"};
    //Calculate size of the array
    int N = sizeof(names)/sizeof(names[0]);
    //Sort the name in alphabet
    for ( int i = 0; i < N; i++)//Outer loop to iterate through the array
    {
        for (int j = i; j <N - 1; j++)//Inner loop to iterate through the array
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                //Swap the names
                char *temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
    //Print the sorted names
    printf("Sorted names: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}
