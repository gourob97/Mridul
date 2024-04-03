// input : marks
// output: grade

/*
 80 - 100 : A+
 70 - 79 : A
 60 - 69 : A-
 50 - 59 : B
 40 - 49 : C
 33 - 39 : D
 0 - 32 : F
*/


/*
 
 if (condition) {
   task..
   ....
 }
 
 */


/*
 if (conditiona 1) {
    task 1
 }
 else if (condition 2) {
    task 2
 }
 */

#include<stdio.h>

int main() {
    int mark;
    
    printf("Enter your mark: ");
    scanf("%d", &mark);
    
    if (mark < 0 || mark > 100) {
        printf("Your mark is invalid\n");
    }
    else if (mark >= 80) {
        printf("Your grade is A+\n");
    }
    else if (mark >= 70) {
        printf("Your grade is A\n");
    }
    else if (mark >= 60) {
        printf("Your grade is A-\n");
    }
    else if (mark >= 50) {
        printf("Your grade is B\n");
    }
    else if (mark >= 40) {
        printf("Your grade is C\n");
    }
    else if (mark >= 33) {
        printf("Your grade is D\n");
    }
    else if (mark >= 0) {
        printf("Your grade is F\n");
    }
    
    return 0;
}

