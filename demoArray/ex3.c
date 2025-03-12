    #include <stdio.h>
    #include <string.h>

    void countVowels(char text[], char vowel[]); // Function prototype
    const int N = 100;
    int main() {
        char text[N];
        printf("Enter text: ");
        scanf("%s", text);
        char vowel[] = {"aeiouAEIOU"};
        countVowels(text, vowel);
        return 0;
    }

    void countVowels(char text[], char vowel[]) {
        int count = 0;
        for (int i = 0; text[i] != '\0'; i++) {
            for (int j = 0; vowel[j] != '\0'; j++) {
                if (text[i] == vowel[j]) {
                    count++;
                    break;
                }
            }
        }
        printf("Number of vowels: %d\n", count); }