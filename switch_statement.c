/*

+--------------------------------------+
|   Grade Input w/ Switch Statement    |
+--------------------------------------+
Author: Aidan Shewfelt
Date: 9/15/2026

*   Takes user input for each grade.
*   Utilizes switch statement to categorize grades
*   Outputs amount of each letter grade.
*   Catches invalid input, increments invalid inputs.

*/

#include<stdio.h>

int main() {
    //Counts for each respective letter grades
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    int xCount = 0; //Counts invalid inputs

    int iteration = 0; //Used to identify valid input
    char grade_input; //Initial input for grades

    int exit_input=0; //Input to determine loop exit

    while(exit_input==0) {
        //Prompts user to input letter grade
        puts ("Input letter grade: ");
        scanf("%s", &grade_input);

        //Switch statement identifies category of input
        switch (grade_input) {
            case 'a': //Takes both lower-case and upper-case inputs.
            case 'A':
                aCount++; //Number of letter grades is incremented, respectively
                iteration=1; //Iteration is set to 1, this indicates that the input was valid.
                break; //Break exits the switch, returns to the outer loop hierarchy

            //Process is repeated if the previous case was false.
            case 'b':
            case 'B':
                bCount++;
                iteration=1;
                break;            

            case 'c':
            case 'C':
                cCount++;
                iteration = 1;
                break;

            case 'd':
            case 'D':
                dCount++;
                iteration = 1;
                break;

            case 'f':
            case 'F':
                fCount++;
                iteration = 1;
                break;
        }

        //If iteration = 0, then an invalid input was registered, will restart process.
        if (iteration == 0) {
            printf("%c is an invalid input! Try again.\n", grade_input);
            xCount++; //Increments xCount to record all invalid inputs.
        }
        else {
            //Prompts user to exit and save their results using exit_input
            puts("Successfully recorded, save and exit?\n1: Yes\n0: No");
            scanf("%d", &exit_input);
        }

        iteration = 0; //Iteration is reset to 0 for the next iteration.
    }

    // Outputs the final results
    puts("\n---RESULTS---");
    printf("- A: %d\n", aCount);
    printf("- B: %d\n", bCount);
    printf("- C: %d\n", cCount);
    printf("- D: %d\n", dCount);
    printf("- F: %d\n", fCount);
    printf("- Rejected Inputs: %d\n", xCount);

    return 0;
}