//Prompt 2 numbers
#include <stdio.h>
int main(void)
{ 
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    //Calculate the difference between the two numbers
    int difference = num1 - num2;
//Difference equal to number1 

if (difference == num1)
{
    printf("Difference equal to number1\n");
}
else
{
    printf("Difference not equal to number1\n");
    
}

//Difference equal to number2
if(difference == num2)
{
    printf("Difference equal to number2\n");
}
else
{
    printf("Difference not equal to number2\n");
}
if(difference != num1 && difference != num2)
{
    printf("Difference not equal to number1,num2\n");}
return 0;

//Difference not equal to number1
//Difference not equal to number2
}
