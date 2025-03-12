//Write a program to accept a string and find out if it is a palindrome.
//Promt user for string
//Reverse string
//Compare reversed string with original string
//Plaindrome if reversed string is equal to original string
//Not plaindrome if reversed string is not equal to original string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // prompt user for string
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    // reverse string
    char rev[100];
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    // compare reversed string with original string
    if (strcmp(str, rev) == 0)
    {
        printf("The string is a plaindrome.\n");
    }
    else
    {
        printf("The string is not a plaindrome.\n");
    }
    return 0;
}
