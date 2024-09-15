#include<stdio.h>

int main(){
    /*Any character is entered through the keyboard, write a program to determine
     whether the character entered is a capital letter, a small case letter, a digit
      or a special symbol*/
      char ch;
      printf("Enter your character:");
      scanf("%c",&ch);
      
         if(ch>='0' && ch<='9'){
            printf("\nYour character is a digit");
        }
        else if(ch>='a' && ch<='z'){
            printf("\nYour character is a lowercase letter");
        }
        else if(ch>='A' && ch<='Z'){
            printf("\nYour character is an uppercase letter");
        }
        else{
            printf("Your character is a special symbol");
        }
        return 0;
}