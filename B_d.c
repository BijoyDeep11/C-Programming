#include<stdio.h>

int main(){
    /*Write a program to print all the ASCII values and their equivalent
     characters using a while loop. The ASCII values vary from 0 to 255.*/

     unsigned char x;
     x = 0;
     while (x <= 255)
     {
        printf("The ASCII value of %c is %d \n", x, x);
        x++;
     }
     return 0;
}