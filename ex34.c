#include <stdio.h>
void example(int n) 
{
    for (int i = n; i > 0 ; i-= 2 ) 
    {
        if (i % 2 == 0) 
        {
            printf("i = %d\n", i);
        }
        else
        {
            printf("i = %d is odd\n", i);
        }
        
    }
}
int main(void) 
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    example(n);
    return 0; 
}