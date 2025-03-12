#include <stdio.h>

int main ()
{
    float centimeters, feet, inches;
    
    // Input centimeters
    printf("Enter the centimeters: ");
    scanf("%f", &centimeters);
    
    // Centimeters to inches
    inches = centimeters / 2.54;
    
    // Inches to feet
    feet = inches / 12;
    // Output feet and inches
    printf("Inches: %.1f Feet: %.1f\n", inches, feet);
    
    return 0;
}