#include<stdio.h>

int main(){
    int n=10;
    for (int i = n; i ; i--)
    {
        printf("%d X %d = %d\n", i,n,i*n);
    }
    return 0;
}