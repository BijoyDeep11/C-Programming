#include <stdio.h>

int main() {
    int hardness, tensile;
    float carbon;
    printf("Enter hardness of the steel: ");
    scanf("%d", &hardness);

    printf("Enter tensile strength of the steel: ");
    scanf("%d", &tensile);

    printf("Enter carbon content of the steel: ");
    scanf("%f", &carbon);
    
    if(hardness > 50 && carbon <0.7 && tensile > 5600){
        printf("This is a grade 10 steel");
    }
   else if(hardness > 50 && carbon <0.7 && tensile < 5600){
        printf("This is a grade 9 steel");
    }
   else if(hardness < 50 && carbon <0.7 && tensile > 5600){
        printf("This is a grade 8 steel");
    }
   else if(hardness > 50 && carbon > 0.7 && tensile > 5600){
        printf("This is a grade 7 steel");
    }
   else if(hardness > 50 || carbon > 0.7 || tensile > 5600){
        printf("This is a grade 6 steel");
    }
    else{
        printf("This is a grade 5 steel");
    }
    return 0;
}
