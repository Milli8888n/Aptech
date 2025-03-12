#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    int tich = a * b;
    if (tich >= 100)
    {
        printf("Overload");
    }
    else if
     (tich > 0 && tich < 100) 
    { 
        printf("Normal");
    }
    return 0;
}