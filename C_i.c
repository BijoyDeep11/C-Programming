#include<stdio.h>

int main(){
/*Given the length and breadth of a rectangle, write a program to find whether
 the area of the rectangle is greater than its perimeter
. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter.*/
int l, b, p, a;
printf("Enter the length of the rectangle:");
scanf("%d", &l);
printf("Enter the breadth of the rectangle:");
scanf("%d", &b);
p=2*(l+b);
a=l*b;
if(a>b){
    printf("Yes!The area is greater than the perimeter");
}
else{
    printf("Naah!The area is less than the perimeter");
}
return 0;
}