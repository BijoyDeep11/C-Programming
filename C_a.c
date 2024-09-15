#include<stdio.h>

int main(){
/*If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the seller has made profit
 or incurred loss. Also determine how much profit he made or loss he
  incurred.*/

    int cp,sp,p,l;
    printf("Your cost price and selling price are: ",cp,sp);
    scanf("%d %d", &cp, &sp);
    p=sp-cp;
    l=cp-sp;
    if(sp>cp){
        printf("\nCongrats! You have made a profit of %d\n",p);
    }
    else if(sp<cp){  
        printf("Oops! You have made a loss of %d",l);
    }
        else{
            printf("You dont have profit or loss");
            }
        return 0;
    }
 
