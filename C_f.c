#include<stdio.h>

int main(){
    /*If the ages of Ram, Shyam and Ajay are input through the
     keyboard, write a program to determine the youngest of the three*/
     int ram_age, shyam_age, ajay_age;
     printf("Enter the age of Ram:\n");
     scanf("%d",&ram_age);
     printf("Enter the age of Shyam:\n");
     scanf("%d",&shyam_age);
     printf("Enter the age of Ajay:\n");
     scanf("%d",&ajay_age);
     if(shyam_age<ram_age && shyam_age<ajay_age){
        printf("Shyam is the youngest of all");
     }
     else if(ram_age<shyam_age && ram_age<ajay_age){
        printf("Ram is the youngest of all");
     }
     else if(ajay_age<ram_age && ajay_age<shyam_age){
        printf("Ajay is the youngest of all");
     }
     return 0;
}