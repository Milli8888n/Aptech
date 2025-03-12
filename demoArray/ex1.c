#include <stdio.h>

void printArray();
void printChar();

int main() {
    printChar();
    printArray();
    return 0;
}

void printChar() {
    char ch[5] = {'t', '2', '5', '0', 'e',}; 
    
    for (int i = 0; i < 5; i++) {
        printf("Char %d is %c\n", i, ch[i]);
    }
}

void printArray() {
    int numbers[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++) {
        printf("Number %d is %d\n", i, numbers[i]);
    }
}