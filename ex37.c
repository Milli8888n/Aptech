#include <stdio.h>
int main(void)
{ 
    int allowance;
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    int salary;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    if (grade == 'A')
    {
        allowance = 300;
        printf("Allowance: %d\n", allowance);
    }
    else if (grade == 'B')
    {
        allowance = 250;
        printf("Allowance: %d\n", allowance);
    }
    else if (grade == 'C')
    {
        allowance = 100;
        printf("Allowance: %d\n", allowance);
    }
    else
    {
        printf("Invalid grade entered.\n");
    }
    int total = salary + allowance;
    printf("Total salary: %d\n", total);
    return 0;
}
