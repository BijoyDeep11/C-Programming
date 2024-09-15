#include<stdio.h>

int main(){
    /*Write a program to enter the numbers till the user wants
     and at the end it should display the count of positive, negative and zeros entered*/

     int num;
     int positive_count = 0, negative_count= 0, zero_count = 0;
     char choice;
    do{

     printf("Enter a number:");
     scanf("%d", &num);


        if(num>0){
            positive_count++;
        }
        else if(num<0){
            negative_count++;
        }
        else{
            zero_count++;
        }
     }while (choice == 'y' || choice == 'Y');
     
     
     printf("Do you want to enter another number? (y/n):");
     scanf(" %c ", &choice);

     printf("\nThe count of positive number is %d", positive_count);
     printf("\nThe count of negative number is %d", negative_count);
     printf("\nThe count of zero is %d", zero_count);

     return 0;
}