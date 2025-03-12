#include <stdio.h>
int main()
{
    float basicSalary, hra, ta, others, netSalary;
    float pf = 0.14 * basicSalary, it = 0.15 * basicSalary, da = 0.12 * basicSalary;
    //Prompt user for basic salary
    printf("Enter the basic salary: \n");
    scanf("%f", &basicSalary);
    //Prompt user for HRA
    printf("Enter the HRA: \n");
    scanf("%f", &hra);
    //Prompt user for TA
    printf("Enter the TA: \n");
    scanf("%f", &ta);
    //Prompt user for others
    printf("Enter the others: \n");
    scanf("%f", &others);
    //Calculate net salary
    netSalary = basicSalary + da + hra + ta + others - (pf + it);
    //Print net salary
    printf("Net Salary: %f\n", netSalary);
    return 0;
}