#include<stdio.h>

int main(){
    int marks_a, marks_b;
    printf("Enter your marks in A: ");
    scanf("%d", &marks_a);

    printf("Enter your marks in B: ");
    scanf("%d", &marks_b);

    if(marks_a < 55 && marks_a >= 45 && marks_b >= 55){
        printf("You have passed the exam");
    }
    else if(marks_a >= 55 && marks_b >= 45){
        printf("You have passed the exam");
    }
    else if(marks_a >= 65 && marks_b < 45){
        printf("You have to reapper for the exam in B");
    }
    else{
        printf("You have failed the exam");
    }
    return 0;
}