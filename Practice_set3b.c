#include<stdio.h>

int main(){
    int marks1= 33, marks2=39, marks3=40;
if(marks1<33 || marks2<33 || marks3<33){
    printf("you are failed due to less marks in individual");
} 
else if((marks1+marks2+marks3)/3<40){
    printf("You are failed due to less overall marks");
}
else{
    printf("you are passed");
}
return 0;
}