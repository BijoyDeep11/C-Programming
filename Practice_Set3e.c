#include<stdio.h>

int main(){
     char ch;
     printf("Enter your character: \n");
     scanf("%c", &ch);
     if(ch>='a' && ch<='z'){
        printf("Your character is a lowercase character");
     }
     else{
        printf("Your character is not a lowercase character");
     }
    return 0;
}