#include <stdio.h>
void fibonacci(int n)
{
    long long fn2 = 1, fn1 = 1, fn;
    
    if (n <= 0 && n ==1)
    { 
        return;
    }
    if ( n >= 2)
    {
        printf("%lld %lld", fn2, fn1);
    }
    for (long long i = 3; i <=n; i++)
    { 
    fn = fn1 + fn2;
    printf(" %lld ", fn);
    fn2 = fn1;
    fn1 = fn;
    }
}
int main(void)
{
    int numfib;
    printf("Enter the number of fibonacci numbers to generate: ");
    scanf("%d", &numfib);
    fibonacci(numfib);
    return 0;
}