#include <stdio.h>
int main()
{ int a,b;
    printf(" Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = a * b;
    if (result >= 100)
    {
        printf("Overload");
    }
    else if (result > 0 || result < 100)
    {
        printf("Normal");
    }
    else
    {
        printf("Error");
        return 0;
}
}