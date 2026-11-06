/*
Program(8) -> Write a C program to swap two numbers using a temporary variable.
Solution(2) -> User Define values.
*/

#include <stdio.h>

int main() 
{
    int num1, num2, temp;

    printf("Enter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);

    // Swapping process
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nValues after swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
