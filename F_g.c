#include<stdio.h>

int main(){
    int angle1, angle2, angle3;
    printf("Enter three angles of your traingle: \n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if(angle1 == angle2 == angle3){
        printf("Your triangle is an equilateral triangle ");
    }
    else if(angle1 == 90 || angle2 == 90 || angle3 == 90){
        printf("Your triangle is a right angled trianle");
    }
    else if(angle1 == angle2 || angle2 == angle3 || angle1 == angle3){
        printf("Your trianle is an isosceles triangle ");
    }
    else{
        printf("Your triangle is scalene triangle");
    }
        return 0;
    }