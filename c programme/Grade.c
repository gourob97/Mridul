#include <stdio.h>
int main()
{
    int mark;
    printf("enter your number");
    scanf("%d", &mark);
    if(mark > 100 || mark < 0 )
    {
        printf ("Your number is invalid");
    }
    else if( mark >=80 )
    {
        printf ("Your Grade is A+");
    }
    else if(mark >=70 )
    {
        printf("Your Grade is A");
    }
    else if( mark >=60 )
    {
        printf("Your Grade is A-");
    }
    else if (mark >=50 )
    {
        printf("Your Grade is B");
    }
    else if (mark >=40 )
    {
        printf("Your Grade is C");
    }
    else if(mark >=33 )
    {
        printf("Your Grade is D");
    }
    else
    {
        printf("Your Grade is F");
    }

    return 0;
}


