//Declare a variable which has the age of the person. Print the user’s name as many
//times as his age.
#include <stdio.h>

int main()
{
    //Prompt user for age
    int age;
    printf("Enter user's age: \n");
    scanf("%d", &age);
    //Promt user name
    char name[30];
    printf("Enter user's name: \n");
    scanf("%s", name);
    //Print name as many times as age
    for ( int i = 0; i < age; i++ )
{ 
    printf("%s\n", name);
   

}
 return 0;
}



