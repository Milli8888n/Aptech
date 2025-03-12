#include <stdio.h>
void example(void)
{
    printf("Begin loop\n");
 
    for ( int i = 0; i <=5 ; i++)
    {
        printf("i = %d\n", i);
    }
    printf("End loop\n");
}
int example2(void)
{
    printf("Begin loop\n");
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("i = %d\n", i);
    }
}
int main(void)
{
    example();
    example2();
}