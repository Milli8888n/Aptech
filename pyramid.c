
#include <stdio.h>

void printfRow(int bricks);

// Print 3x3 bricks
int main(void) {
    // Prompt user for height
    int height;
    do {
        printf("Height: ");
        scanf("%d", &height);
    } while (height < 1);
    // Print left-aligned bricks
    for (int i = 0; i < height; i++) 
    {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        
        }  
    
        printfRow(i+1);
        
    //Print two spaces
    printf("  ");
    // Print right-aligned bricks
    printfRow(i+1);
    printf("\n");
    }
   
    
   
    return 0;
}

// Print n rows of bricks
void printfRow(int bricks) 
{
    for (int i = 0; i < bricks; i++) {
        printf("#");
    
    }
}