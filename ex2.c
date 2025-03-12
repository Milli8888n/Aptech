#include <stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Please enter a number : \n");
    scanf("%d", &a);
    printf("Please enter a number: \n");
    scanf("%d", &b);
    // c = a/b lấy nguyên
    c = a/b;
     // c = a%b lấy dư
    printf("a/b = %f", c);
    return 0;
    
}