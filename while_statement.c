/*

+------------------------------------------------------------+
|   Average Grade Calculator w/ User Controlled Iteration    |
+------------------------------------------------------------+
Author: Aidan Shewfelt
Date: 9/11/2026

*   Takes user input for total amount of students.
*   Takes user input for each specific grades.
*   Calculates exam grade average out of the total amount of students.

*/

#include<stdio.h>

int main() {
    int counter = 0; //Iterates while loop
    int grade = 0; //Individual grades
    int total_grades = 0; //Total grades after while loop
    int total_students=0; //Total number of students

    printf("Please enter the total amount of students: \n");
    scanf("%d", &total_students); //Inputs total number of students

    while(counter < total_students) { //Precondition check
        printf("Please enter student grade: ");
        scanf("%d", &grade); //Input individual grade

        total_grades += grade; //Accumulates grades
        counter++; //Iterates loop
    }

    printf("Number of students: %d\n", counter); //Uses counter instead of total_students to confirm that loop iterated the correct amount of times.
    printf("Class exam average out of %d students: %d\n", counter, (total_grades/counter)); //Extra paranthases makes it easier to read

    return 0;
}