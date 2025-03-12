//Write a C program to count the number of vowels and the number of consonants
//in a word.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    //promt user to enter word
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    //Count the number of vowels and consonants in the word
    char vowels[] = "aeiouAEIOU";
    int vowelCount = 0;
    int consonantCount = 0;
    for ( int i = 0; i < strlen(word) ; i++)
    {
        
        if (strchr(vowels, word[i]) != NULL)
        {
            vowelCount++;
        }
        else if(isalpha(word[i]))
        {
            consonantCount++;
        }
    }

  //Print the number of vowels and consonants in the word
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);
    return 0;
}
