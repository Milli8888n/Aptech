#include <stdio.h>
#include <conio.h>

int main() {
    char arr[100];
    int i = 0;
    int ch;

    do {
        printf("Enter character (or '|' or ESC to stop): ");
        ch = _getche(); // Sử dụng _getche() để hiển thị ký tự

        if (ch == '|' || ch == 27) {
            break;
        }

        if (ch == '\n' || ch == '\r') {
            continue;
        }

        if (i < 100) {
            arr[i] = ch;
            i++;
        } else {
            printf("Array is full!\n");
            break;
        }

        printf("\n"); // Move to the next line.
    } while (1);

    printf("\nEntered characters: ");
    for (int j = 0; j < i; j++) {
        printf("%c", arr[j]);
    }
    printf("\n");

    return 0;
}