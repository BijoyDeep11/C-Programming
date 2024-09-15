#include<stdio.h>

int main(){
    /*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to 
    check if all the three points fall on one straight line.*/
    int x1,y1,x2,y2,x3,y3,a;
    printf("Enter the first coordinates:\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second coordinates:\n");
    scanf("%d %d", &x2, &y2);
    printf("Enter the third coordinates:\n");
    scanf("%d %d", &x3, &y3);
    a=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    if(a == 0){
        printf("All the three points fall in one straight line");
    }
    else{
        printf("They don't fall in one straight line");
    }
    return 0;
}