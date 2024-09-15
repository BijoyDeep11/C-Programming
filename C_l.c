#include<stdio.h>

int main(){
    /*Given a point (x, y), write a program to find out
     if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).*/
     int x,y;
     printf("Enter your coordinates:\n");
     scanf("%d %d", &x, &y);
     if(x == 0 && y != 0){
        printf("The point lies on x-axis");
     }
     else if(y == 0  && x !=0){
     printf("The point lies on y-axis");
     }
     else if(x == 0 && y == 0){
        printf("The point lies on origin");
     }
     return 0;
}