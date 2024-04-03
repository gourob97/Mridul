#include<stdio.h>
int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num); // format specifier
    int i;
    
    for (i=2; i<num; i++) {
        if (num % i == 0) {
            printf("Not a prime number\n");
            break;
        }
    }
    
    if (i == num) {
        printf("Prime number\n");
    }
    
    return 0;
}
