#include<stdio.h>

int main(){
    int days;
    printf("How many days are you late? ");
    scanf("%d", &days);
    if(days<=5){
        printf("Your fine is 50 paise!");
    }
   else if(days >= 6 && days <= 10){
        printf("Your fine is 1 rupee!");
    }
   else if(days >= 10 && days <= 30){
        printf("Your fine is 5 rupees!");
    }
    else if(days > 30){
        printf("Your membership is cancelled!");
    }
    return 0;
}