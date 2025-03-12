
    #include<stdio.h>

    int main() {
        //Promt user to input 2 number
        int a,b;
        printf("Enter 2 numbers: \n");
        scanf("%d%d", &a, &b);
        //Check if i from a to b /3 and /5 = 0
        printf("Numbers divisible by 3 and 5 are: \n");
        for(int i = a; i <= b; i++)
        {
            if(i %3 == 0 && i %5 == 0)
            {
            printf("%d ", i);
            }
        }
        
        return 0;
    }