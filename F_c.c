#include<stdio.h>

int main() {
    char health, residence , sex;

    printf("Enter your health status: ");
    scanf(" %c ", &health);

    printf("Enter your residence: ");
    scanf(" %c ", &residence);

    printf("Enter your sex: ");
    scanf(" %c ", &sex);
    
    if(health == 'E' && residence == 'C' && sex == 'M'){
        printf("You are insured\nYour premium rate is Rs 4 per thousand\nYour maximum amount is Rs 2 Lakhs");
    }
    else if(health == 'E' && residence == 'C' && sex == 'F'){
        printf("You are insured\nYour premium rate is Rs 3 per thousand\nYour maximum amount is Rs 1 Lakhs");
    }
    else if(health == 'P' && residence == 'V' && sex == 'M'){
        printf("You are insured\nYour premium rate is Rs 4 per thousand\nYour maximum amount is Rs 10 Thousands");
    }
    else{
        printf("You are not insured");
    }
    
    return 0;
}