#include <stdio.h>
int  main()
{
    double celcius, farenheit;
    printf("enter celsius temparature");
    scanf("%lf", &celcius);
    farenheit = 1.8 * celcius + 32;
    printf ("%lf\n", farenheit);
    return 0;
}
