#include <stdio.h>
int main()
{
    int sum;
    printf("Enter sum:\n");
    scanf("%d", &sum);
    printf("Value of sum = %d\n", sum);
    printf("Welcome\n");
    //char
    char letter;
    scanf("%c", &letter);
    printf("Enter letter:\n");
    scanf("%c", &letter);
    printf("Value of Letter = %c\n", letter);
    float discount ;
    printf("Enter discount:\n");
    scanf("%f", &discount);
    printf("Value of discount = %f\n", discount);
    //
    float dump ;
    printf("Enter dump: \n");
    scanf("%f", &dump);
    printf("Value of dump = %.2f\n", dump);
   
    float discount_rate;
    printf("Enter discount rate:\n");
    scanf("%f", &discount_rate);
    printf("Discount rate = %f\n", discount_rate);
    return 0;

}