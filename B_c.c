#include<stdio.h>

int main(){
    /*Two numbers are entered through the keyboard. Write a program
     to find the value of one number raised to the power of another*/
     int base, exponent;
     long long result = 1;
     printf("Enter the base number: ");
     scanf("%d", &base);
     printf("Enter the exponent number: ");
     scanf("%d", &exponent);

     for (int i = 1; i <= exponent; i++)
     {
        result *= base;
     }
     
     printf("When %d is raised to the power %d the result is %d ", base, exponent, result );

     return 0;
}