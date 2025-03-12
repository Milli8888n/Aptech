#include <stdio.h>
int printfRow(int num);
int main()
{

    int height  ;
    //Prompt user for height
    do{
        printf("Height: ");
        scanf("%d",&height);
    }while (height < 1);
    

   //Print pyramid
    for (int i = height; i >= 1; i--)
    {
        printfRow(i);
    }
}


//Print number of row
int printfRow(int num) 
{ 
    for (int i = 1; i <= num; i++)
    {
        printf("%d",i);
    }
    printf("\n");
}   

    
