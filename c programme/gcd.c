
#include<stdio.h>
int main() {
    int big = 17;
    int small = 10;
    int temp;
    
    // swap
    temp = small;
    small = big;
    big = temp;
    //
    
    printf("big %d\n",big);
    printf("small %d\n",small);
    
    
    return 0;
}
