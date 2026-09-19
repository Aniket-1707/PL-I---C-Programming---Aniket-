/*
Program(6) -> Write a program to calculate the average of three numbers.
Solution(2) -> User Define values.
*/

#include <stdio.h>

int main() 
{
    int a, b, c;
    float avg;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a + b + c) / 3.0;

    printf("Calculated Average: %f\n", avg);

    return 0;
}
