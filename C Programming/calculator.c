#include<stdio.h>

int main() {
    int firstNumber; //variable declaration
    int secondNumber; //variable declaration
    
    printf("Enter two numbers: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    
    printf("The summation is %d\n",firstNumber + secondNumber);
    printf("The diff is %d\n", firstNumber - secondNumber);
    printf("The product is %d\n", firstNumber * secondNumber);
    printf("The division is %d\n",firstNumber / secondNumber);
    
    return 0;
}


// error in programming
/*
 1. Syntax error ( Compiler can detect this type of error )
 2. Logical error ( run + no crash )
 3. Runtime error (crash)
 */





