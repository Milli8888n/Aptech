#include <stdio.h>
int main()
{
    int iResult, a = 10, b = 8, c = 6, d = 5, e =2; 
    iResult = a - b - c - d;
    // Print result
    printf("Result: %d\n", iResult);
    iResult = a - b + c - d;
    // Print result 2
    printf("Result 2: %d\n", iResult);
    iResult = a + b / c / d;
    // Print result 3
    printf("Result 3: %d\n", iResult);
    iResult = a + b / c * d;
    //Print result 4
    printf("Result 4: %d\n", iResult);
    iResult = a / b * c * d;
    //Print result 5
    printf("Result 5: %d\n", iResult);
    iResult = a % b / c * d;
     //Print result 6
     printf("Result 6: %d\n", iResult);
     iResult = a % b % c % d;
      //Print result 7
    printf("Result 7: %d\n", iResult);
    iResult = a - (b - c) - d;
     //Print result 8
     printf("Result 8: %d\n", iResult);
     iResult = (a - (b - c)) - d;
      //Print result 9
    printf("Result 9: %d\n", iResult);
    iResult = a - ((b - c) - d);
     //Print result 10
     printf("Result 10: %d\n", iResult);
     iResult = a % (b % c) * d * e;
      //Print result 11
    printf("Result 11: %d\n", iResult);
    iResult = a + (b - c) * d - e;
     //Print result 12
     printf("Result 12: %d\n", iResult);
     iResult = (a + b) * c + d * e;
      //Print result 13
    printf("Result 13: %d\n", iResult);
    iResult = (a + b) * (c / d) % e; 
    //Print result 14
    printf("Result 14: %d\n", iResult);
    return 0;
}
    












