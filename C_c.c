#include<stdio.h>

int main(){
    /*Any year is input through the keyboard. Write a program to
     determine whether the year is a leap year or not.*/
     int year;
     printf("Enter your year: ");
     scanf("%d", &year);
     if((year%4==0 && year!=100) || year%400==0){
        printf("It is a leap year");
     }
     else{
        printf("Its not a leap year");
     }
     return 0;
}
