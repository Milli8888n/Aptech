#include <stdio.h>

int main(void)
{ 
    int num1, num2, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 is less than num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1+1; i <num2; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("The sum of all odd numbers between %d and %d is %d\n", num1, num2, sum);
    return 0;
}