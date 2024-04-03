#include <stdio.h>
int main()
{
    int number;
    printf("enter your number");
    scanf("%d", &number);
    if(number % 3 == 0 && number % 5 ==0)
    {
        printf("FizzBuzz");
        printf("Hurray");
    }
    else if(number % 3 == 0 )
    {
        printf ("Fizz");
    }
    else if (number % 5 ==0 )
    {
        printf ("Buzz");
    }
    return 0;
}



