#include<stdio.h>

int main(){
    int i=1;
    int sum = 0;
    for (int i = 1; i <=10; i++)
    {
        sum +=i; // sum = sum+i
    }
    printf("The sum of first ten natural numbers is %d", sum);
    return 0;
}