#include<stdio.h>

int main(){
    /*Write a program to find the factorial value of any number entered through the keyboard*/
    int n;
    int factorial = 1;
      printf("Enter your number: ");
        scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }

    printf("The factorial of %d is %d ", n, factorial);
    
    return 0;
}