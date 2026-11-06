/*
Program(4) -> Write a program to calculate the area of a circle.
Solution(2) -> User Define values.
*/

#include <stdio.h>

int main() 
{
    float r, ans;

    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    ans = 3.14 * r * r;

    printf("Calculated Area of circle: %f\n", ans);

    return 0;
}
