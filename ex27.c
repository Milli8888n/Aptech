#include <stdio.h>
// Function definition
int Total(int a, int b)
{ int total = a + b;
return total;
}
int main()
{ 
    // Call function
    int x,y = 0;
    printf("Enter numbers:");
    scanf("%d %d", &x, &y);
    int sum1 ;
    sum1 = Total(x,y); 
    printf("Sum is %d\n", sum1);
    int sumSalary;
    sumSalary = Total(x,y);
    printf("Sum of salary is %d\n", sumSalary);
    int asmMark, pMark;
    printf("Total mark \r\n");
    printf("Enter mark for ASM and P: \r\n");
    scanf("%d %d", &asmMark, &pMark);
    int totalMark = Total(asmMark, pMark);
    printf("Mark is %d\n", totalMark);
    return 0;
}

 