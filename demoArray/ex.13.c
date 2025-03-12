#include <stdio.h>
#include <string.h>

typedef struct {
    int no;
    char name[30];
} Employee;

int main() {
    Employee emp[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter number and name for employee %d: \n", i + 1);
        if (scanf("%d %29s", &emp[i].no, emp[i].name) != 2) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("Employee %d - no: %d, name: %s\n", i + 1, emp[i].no, emp[i].name);
    }

    printf("Enter ESC to exit.\n");
    int ch;
    do {
        ch = getchar();
        if (ch == 27) {
            break;
        }
    } while (1);

    printf("\n");
    return 0;
}