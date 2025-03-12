#include <stdio.h>
void main()
{ int x = 0;
    printf("Enter a number:");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
        printf("1\n");
        break;
        case 2:
        printf("2\n");
        break;
        case 3:
        printf("3\n");
        break;
        default:
        printf("Invalid\n");
    }
    printf("End");
}