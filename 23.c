#include <stdio.h>
int main()
{ 
    float basic, daper, bonper, loandet, salary;
    char name [] = "M A R K";
    // Input data
    printf("Enter number for basic, daper, bonper, loandet:\n");
    scanf("%f %f %f %f", &basic, &daper, &bonper, &loandet);
    // Calculate salary
    salary = basic + basic * daper /100 +bonper * basic/100 - loandet;
    // Output
    printf("Name\tBasic\tSalary\n");
    printf("%s\t%.2f\t%.2f\n", name, basic, salary);
    return 0;

}