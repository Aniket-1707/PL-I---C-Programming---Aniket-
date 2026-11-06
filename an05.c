/*
Program(5) -> Write a program to calculate the average of three numbers.
Solution(1) -> Predefined values.
*/

#include <stdio.h>

int main() 
{
    int num1 = 15;
    int num2 = 25;
    int num3 = 35;
    float avg;

    avg = (num1 + num2 + num3) / 3.0;

    printf("\n--- Average Calculation ---\n");
    printf("The average is: %f\n", avg);

    return 0;
}
