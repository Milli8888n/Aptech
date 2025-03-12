#include <stdio.h>
int Total(int a, int b)
{ 
int Total = a + b;
return Total;
}
float totalExp(float a, float b)
{ 
    float totalE;
    totalE = (float)((a + b)/2);// Ép kiểu
    return totalE;
}
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    int result = Total(a,b)/2 + b;
    printf("The result is %d", result);
    return 0;
}