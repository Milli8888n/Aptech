#include <stdio.h>

int main()
{
    int age;
    float salary;
    
    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Print age
    printf("Age: %d\n", age);
    
    // Prompt user for salary
    printf("Enter your salary: ");
    scanf("%f", &salary);
    
    // Print salary
    printf("Salary: %.2f\n", salary);
    
    return 0;
}
