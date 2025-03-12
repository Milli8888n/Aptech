#include <stdio.h>
int main()
{
    int x, y ,z;
    scanf("%d%d%d", &x, &y, &z);
    int total = (x + y)*z/2;
    if (total%2 == 0)
    { printf("Chia het");}
    else 
    {
        printf("Chia du");
    }
return 0;
}