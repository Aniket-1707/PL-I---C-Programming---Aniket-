/*
Program(7) -> Write a C program to swap two numbers using a temporary variable.
Solution(1) -> Predefined values.
*/

#include <stdio.h>

int main() 
{
    int x = 45;
    int y = 90;
    int temp;

    printf("--- Before Swapping ---\n");
    printf("x = %d, y = %d\n", x, y);

    // Swapping logic
    temp = x;
    x = y;
    y = temp;

    printf("\n--- After Swapping ---\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
