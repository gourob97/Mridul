#include<stdio.h>

int main() {
    int number = 1; // counter initialization
    
    while (number <= 10 /* condition*/)
    {
        printf("%d\n", number);
        number++; // counter increment
    }
    return 0;
}



// 1 + 2 + 3 + 4 + 5s

//number sum
//==========
//1   0 // before entering loop
//
//after first loop
//============
//sum = 1
//number = 2
//
//after second loop
//===================
//sum = 1 + 2 = 3
//number = 3
//
//3rd
//=====
//sum = 6
//number = 4
//
//4th
//
//sum = 6 + 4 = 10
//number = 5
//
//
//5th
//sum = 10 + 5 = 15
//number = 6
//
