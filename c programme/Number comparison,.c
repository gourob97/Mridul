#include <stdio.h>
int main()
{
    int number1,  number2;
    printf("enter first number");
    scanf("%d", &number1);
    printf("enter second number");
    scanf("%d", &number2);
    if (number1 == number2)
    {
        printf("Numbers are equal");
    }
    else if(number1 > number2)
    {
        printf("Number 1 is grater than Number 2");
    }
    else if(number1 < number2)
    {
        printf("Number 1 is less than Number 2");
    }
    
    return 0;
}

