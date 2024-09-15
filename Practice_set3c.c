#include<stdio.h>

int main(){
    float slab;
  printf("Enter tax slab: \n");
  scanf("%f", &slab);
  if(slab<2.5){
    printf("No need to pay tax");
  }
  else if(slab>=2.5 && slab<=5.0){
    printf("You have to pay 5%% of your income as tax");
  }
  else if(slab>=5.0 && slab<=10.0){
    printf("You have to pay 20%% of your income as tax");
  }
  else if (slab>10.0){
    printf("You have to pay 30%% of your income as tax");
  }
    return 0;
}