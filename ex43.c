#include <stdio.h>
void nestedexample2(int n, int m);
int main()
{
    int n,m = 0;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &n,&m);
    nestedexample2(n,m);
    printf("End\n");
    return 0;
}
void nestedexample2(int n, int m)
{
    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; i++)
        {
            if ( j = 6)
            {
            break; 
        }
        printf("i = %d j = %d\n", n,m);
        }
    }
}    
//void nestedexample(int n, int m)
//{for (int i = 0; i < n; i++)
//{for (int j = 0; j < m; j++)
   // printf(" i = %d j = %d\n", i ,j);}}

