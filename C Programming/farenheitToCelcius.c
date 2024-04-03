#include<stdio.h> // header file

int main() {
    float farenheiet;
    float celcius;
    
    printf("Enter temperature in farenheiet unit :");
    scanf("%f",&farenheiet);
    celcius = ((farenheiet - 32) / 9) * 5;
    printf("The celcius temperature is %.2f\n", celcius);
    
    return 0;
}

/*
  c/5 = (f-32)/9
  => c = (f-32)/ 9 * 5
 */
