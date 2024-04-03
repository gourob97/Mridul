/*
 Fizz Buzz Game
 input : number
 output: fizz / buzz / fizzbuzz
 
 */


#include<stdio.h>
int main() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    
    if (number % 3 == 0 && number % 5 == 0) {
        printf("fizzbuzz\n");
    }
    else if (number % 3 == 0) {
        printf("fizz\n");
    }
    else if (number % 5 == 0) {
        printf("buzz\n");
    }
    
    return 0;
}
