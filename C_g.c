#include<stdio.h>

int main(){
/*Write a program to check whether a triangle is valid or not,
 when the three angles of the triangle are entered through the keyboard.
  A triangle is valid if the sum of all the three angles is equal to 180 degrees*/
  int angle1, angle2, angle3;
  printf("Enter 1st angle: ");
  scanf("%d",&angle1);
  printf("Enter 2nd angle:");
  scanf("%d",&angle2);
  printf("Enter 3rd angle:");
  scanf("%d",&angle3);
  if(angle1+angle2+angle3 == 180){
    printf("\nThis triangle is valid");
  } 
  else{
    printf("\nThis triangle is not valid");
  }
  return 0;
}