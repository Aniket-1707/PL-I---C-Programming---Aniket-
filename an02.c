/*
Program(2) -> Write a program to make use of basic Input/Output functions using different data types.
Solution(2) -> User Define values.
*/

#include <stdio.h>

int main() 
{
    int roll_no;
    float percentage;
    char student_grade;

    printf("Enter Student Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter Student Percentage: ");
    scanf("%f", &percentage);

    printf("Enter Student Grade: ");
    scanf(" %c", &student_grade);

    printf("\n----- Student Details -----\n");
    printf("Roll No: %d\n", roll_no);
    printf("Percentage: %f\n", percentage);
    printf("Grade: %c\n", student_grade);

    return 0;
}

