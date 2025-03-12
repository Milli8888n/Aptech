#include <stdio.h>

int main()
{
    float physics, chemistry, biology;
    
    // Prompt user for Physics marks
    printf("Enter Physics marks: ");
    scanf("%f", &physics);
    
    // Prompt user for Chemistry marks
    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);
    
    // Prompt user for Biology marks
    printf("Enter Biology marks: ");
    scanf("%f", &biology);
    
    // Calculate total and average marks
    float total = physics + chemistry + biology;
    float average = total / 3;
    
    // Print total and average marks
    printf("Total marks = %f\n", total);
    printf("Average marks = %f\n", average);
    
    return 0;
}