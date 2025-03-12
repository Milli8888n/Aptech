
#include <stdio.h>

int main() {
    // Prompt user to enter size of array
    int size;
    printf("Enter size of array: \n");
    scanf("%d", &size);
    char arr[size];

    // Prompt user to enter elements of array
    printf("Enter elements of array: \n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: \n", i);
        scanf(" %c", &arr[i]); // Added space before %c to consume any leading whitespace
    }

    // Print elements of array
    printf("Elements in the array are: \n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %c\n", i, arr[i]);
    }

    return 0;
}