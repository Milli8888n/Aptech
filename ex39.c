#include <stdio.h>

int main() {
    char first_name[30], last_name[30];

    printf("Enter your first name: ");
    scanf("%s", first_name);

    printf("Enter your last name: ");
    scanf("%s", last_name);

    printf("Your name is: %s %s\n", last_name, first_name);

    return 0;
}
