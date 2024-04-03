#include <stdio.h>
int main()
{
    int number1, number2;
    
    printf("enter first number");
    scanf("%d",&number1);
    printf("enter second number");
    scanf("%d",&number2);
    
    printf("First number + second number = %d\n", number1 + number2);
    printf("First number - second number = %d\n", number1 - number2);
    printf("First number * second number = %d\n", number1 * number2);
    printf("First number / second number = %d\n", number1 / number2);
    
    return 0;
}
