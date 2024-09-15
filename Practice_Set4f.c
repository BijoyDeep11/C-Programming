#include<stdio.h>

int main(){
    int i=1;
    int factorial=1;
    for (int i = 1; i <=7; i++)
    {
        factorial *=i;
    }
    printf("The factorial of 7 is %d", factorial);
    return 0;
}