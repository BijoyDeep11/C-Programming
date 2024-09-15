#include<stdio.h>
#include<math.h>

int main(){
    /*Given the coordinates (x, y) of a center of a circle and it’s radius
    , write a program which will determine whether a point lies inside the
     circle, on the circle or outside the circle.*/
     int x,y,r,x1,y1;
     double d;
     printf("Enter the coordinates of centre of the circle:\n");
     scanf("%d %d",&x, &y);
     printf("Enter the radius:\n");
     scanf("%d",&r);
     printf("Enter the coordinates of the point:\n");
     scanf("%d %d", &x1, &y1);
     d=sqrt(( x1-x) * (x1-x) + (y1-y) * (y1-y));
     if(r>d){
        printf("The point lies inside the circle");
     }
     else if(d == r){
        printf("The point lies on the circle");
     }
     else{
        printf("The point lies outside the circle");
     }
     return 0;
}