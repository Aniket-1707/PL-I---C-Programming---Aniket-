
Program(1) -> Write a program to make use of basic Input/Output functions using different data types.
Solution(1) -> Predefined values.
*/

#include <stdio.h>

int main() {
    int rollnum = 42;
    float per = 79.5;
    char grade = 'B';
    
    printf("--- Student Details ---\n");
    printf("Roll No: %d\n", rollnum);
    printf("Percentage: %f\n", per);
    printf("Grade: %c\n", grade);
    
    return 0;
}
