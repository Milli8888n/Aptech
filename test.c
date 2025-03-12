#include <stdio.h>
//Calculate sum from num
void summary(int n)
{ 
    int sum = 0;
 for (int i = 0; i <= n; i++ )
 {
     sum += i;
     
 }
    printf("Sum = %d\n", sum); 
}
 //Calculate multi from m
 void multiple(int m)
            {
            int multi = 1;
            for(int i = 1; i <= m; i++ )
            {
                multi *= i;
                
            }
            printf("Multi = %d\n", multi);
        }
int main()
{   //Set a ifinity loop
    do
    {  //Prompt user to choose 1 from these 3 options
    int choice;
    printf("Enter 1 to calculate sum\n");
    printf("Enter 2 to calculate multi\n");
    printf("Enter 9 to exit\n");
    scanf("%d", &choice);
    if(choice == 9)
        { 
         break;
        }
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    int result;
    //Condition for each choice    
    if(choice == 1)
        {   

           summary(num);
        }
    else if(choice == 2)
        {
           multiple(num);
        }
    else 
    {
        printf("Invalid\n");
    }
} while (1);
    
     return 0;
}