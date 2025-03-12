#include <stdio.h>
void example2(int n);
void example(int n)
{
    printf("Example : \n");
    int i = 0;
    do 
    {
        printf("i = %d\n", i);
        i++;
    }
        while (i <= n);
    }
    int main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        example(n);
        example2(n);
        return 0;
    }

void example2(int n)
{
    printf("Example 2: \n");
    int i = 5;
    while ( i<n)
    {
        printf("i = %d\n", i);
        i++;
    }
}