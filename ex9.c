#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); // Fix: Added '&' to pass the address of n
    if (n % 5 == 0) // Fix: Changed '/' to '%' to check for remainder
    {
        printf("Chia het cho 5");
    }
    else
    {
        printf("Khong chia het cho 5");
    }
}