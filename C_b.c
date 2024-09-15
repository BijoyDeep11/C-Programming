#include<stdio.h>

int main(){
    /*Any integer is input through the keyboard. 
    Write a program to find out
     whether it is an odd number or even number*/
     int number;
     printf("Enter your number: \n");
     scanf("%d",&number);
     if(number%2==0){
        printf("The number is an even number");
     }
     else if(number==0){
        printf("Your number is neither odd nor even");
     }
     else{
        printf("The number is an odd number");
     }
     
     return 0;
}
