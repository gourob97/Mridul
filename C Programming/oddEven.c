/*
 modulo operator --> %  (used to find the remainder of a division)
 5 % 3 (read as [5 modulo 3])
 5 % 3 = 2
 
 10 % 3 = 1
 13 % 2 = 1
 
 10 % 2 = 0
 2 % 2 = 0
 
 
 even % 2 = 0
 odd % 2 = 1
 
 */


#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    if (num % 2 == 0) {
        printf("Even number");
    }
    else {
        printf("Odd number");
    }
    
    return 0;
}
