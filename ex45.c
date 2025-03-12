#include <stdio.h>
void example4(int n, int m);
int main(void)
{
    int n,m = 0;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &n,&m);
    example4(n,m);
    printf("End\n");
    return 0;
}
void example4(int n, int m)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while ( j < m)
        {
        printf("i = %d j = %d\n",i, j);
        j++;
        }
    i++;
    }
}