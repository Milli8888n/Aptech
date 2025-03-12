#include <stdio.h>
#define Pi 3.14159
int main() 
{
    float radius, height, volume;
    //Prompt user for radius
    printf("Enter the radius of the cylinder:");
    scanf("%f", &radius);
    //Prompt user for height
    printf("Enter the height of the cylinder:");
    scanf("%f", &height);
    //Calculate volunme
    volume = Pi * radius * radius * height;
    //Print volume
    printf("Volume: %f\n", volume);
    return 0;
}
