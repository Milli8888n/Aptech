#include <stdio.h>
//Calculate how many 25c,10c,5c,1c need
int cal(int *cents, int coinvalue)
{ 
    int count = 0;
    while (*cents >= coinvalue)
{
    count++;
    *cents -= coinvalue;
   
    
}
return count;
}
int main(void)
{
//Promt user for $$$ need to change
int cents;
do
{
    printf("Enter the amount of money you need to change: \n");
    scanf("%d", &cents);
} while(cents < 0);
int quarters = cal(&cents, 25);
int dimes = cal(&cents, 10);
int nickels = cal(&cents, 5);
int pennies = cal(&cents, 1);

printf("You will need %d quarters, %d dimes, %d nickels, and %d pennies\n", quarters, dimes, nickels, pennies);
//Sum up the number of coins needed
int total = quarters + dimes + nickels + pennies;
printf("You will need %d coins in total\n", total);
}