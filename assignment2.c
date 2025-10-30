/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: Volume and surface area program calculator
*/

#include <stdio.h>

int main(){
    
    float radius, height, volume, surface_area;
    const float PI = 3.142;
    
    // prompt the user to enter the radius
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    
    // promt the user to enter the height
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    
    // calculate the volume
    volume = PI * radius * height;
    
    // calculate the suface area
    surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);
    
    // print the output
    printf("volume of cylinder: %.2f\n", volume);
    printf(" surface area of cylinder: %.2f\n", surface_area);
    
    return 0;
}