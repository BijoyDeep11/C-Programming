#include<stdio.h>
#include<math.h>
int main(){
    /*Find the absolute value of a number entered through the keyboard*/
    int number,abs_val;
    printf("Enter the number:");
    scanf("%d",&number);
    abs_val = fabs(number);
    printf("The absolute value of %d is %d", number,abs_val);
    return 0;
}