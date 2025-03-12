#include <stdio.h>

void example(int n)
{
    int i = 0;
    while (1)
    { 
        if(i % 2 == 0)
        {
            printf("%d\n", i);
            i++;
        }
        else
        {
            printf("%d is odd\n", i);
            i++;
        }
        if (i > n)
        {
            break;
        }
    }
}
int main()
{
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    example(n);
    return 0;
}