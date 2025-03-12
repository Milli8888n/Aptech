

#include <stdio.h>

int main() {
    int a, b;

    printf("Please enter two numbers: "); // Improved prompt
    scanf("%d %d", &a, &b); //added space between the %d to make it clearer the input should be two seperate numbers.

    if (a == b) {
        printf("True expression\n"); // Added newline
    } else {
        printf("False expression\n"); // Added newline
    }

    return 0;
}