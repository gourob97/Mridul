#include<stdio.h>
int main() {
    int big, small, temp, remainder;
    printf("Enter two numbers : ");
    scanf("%d%d", &big, &small);
    
    if (small > big) { //swap
        temp = small;
        small = big;
        big = temp;
    }
    
    remainder = big % small;
    
    while (remainder != 0) {
        big = small;
        small = remainder;
        remainder = big % small;
    }
    
    printf("GCD is %d\n", small);
    return 0;
}
