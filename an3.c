/*
Program(3) -> Write a program to calculate the area of a circle.
Solution(1) -> Predefined values.
*/

#include <stdio.h>

int main() {
    float r = 4.5;
    float result;
    
    result = 3.14 * r * r;
    
    printf("\n --- Area Calculation ---\n");
    printf("Radius: %f\n", r);
    printf("Area of circle: %f\n", result);
    
    return 0;
}
