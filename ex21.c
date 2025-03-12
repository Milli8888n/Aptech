#include <stdio.h>
int main()
{
    char letter1, letter2;
    printf("Enter letter: \n");
    scanf("%c", &letter1); 
    getchar();
    printf("Enter letter: \n");
    scanf("%c", &letter2);
    printf("ASCII value of %c = %d\nASCII value of %c = %d", letter1, letter1, letter2, letter2);
    return 0;
}