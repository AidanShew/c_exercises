/*

+---------------------------------------------------------------+
|   Average Grade Calculator w/ Sentinel Controled Iteration    |
+---------------------------------------------------------------+
Author: Aidan Shewfelt
Date: 9/11/2026

*   Does not take input for amount of students
*   Takes user input for each specific grades.
*   Continues to prompt user for grades until -1 is specifically reached.
    *   -1 is the "Sentinal Value".
*   Calculates exam grade average out of the total amount of students.

*/

#include <stdio.h>

int main() {
    int count = 0;
    int grade = 0;
    int total_grade = 0;

    puts("Enter -1 to Finish\n");

    while(grade != -1) {
        printf("Enter Grade #%d: ", count+1);
        scanf("%d", &grade);
        if (grade >= 0) {
            total_grade += grade;
            count++;
        }
        else if (grade!=-1) {
            printf("Invalid grade! Try again.\n");
        }
    }
    if (count > 0) {
        float average = total_grade/(float)count;
        printf("\nNumber of Students: %d\n", count);
        printf("Exam Average: %0.2f\n", average);
    }
    else {
        puts("\nNo Grades to Calculate\n");
    }
    puts("Goodbye\n");

    return 0;
}