#include <stdio.h>
void findMax()
{int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a >b && a > c)
    {
        printf("a is the biggest number.%d", a);
    }
    else if (b > a && b > c) 
    {
        printf("b is the biggest number.%d", b);
    }
    else
    { 
        printf("c is the biggest number.%d", c);
    }
}
int main()
{
    findMax();
    return 0;
}
