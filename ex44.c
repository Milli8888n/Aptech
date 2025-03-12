#include <stdio.h>

// Prompt 2 numbers
int main() {
    int num1, num2, start, end;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &num1, &num2);

    // Check which number is bigger to define start and end
    if (num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }

    // Print elements
    printf("Elements in the loop are: ");
    int i = start;
    do {
        printf("%d ", i);
        i++;
    } while (i <= end);
    printf("\n");

    return 0;
}