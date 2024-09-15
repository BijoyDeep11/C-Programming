#include<stdio.h>

int main(){
    /*Match stick game*/

    int matchsticks = 21, user_pick, computer_pick;

    printf("Welcome to the matchstick game! \n");
    printf("The rules are quite simple: \n");
    printf("There are total 21 matchsticks \n");
    printf("You can pick 1, 2, 3 or 4 matchsticks \n");
    printf("And then computer will pick \n");
    printf("Whomever will have 1 matchstick left will lose the game \n");
    printf("So let's start! \n");

    while (matchsticks>1)
    {
        printf("\nThere are %d matchsticks remaining, Pick 1, 2, 3 or 4 matchsticks:", matchsticks);
        scanf("%d", &user_pick);

        if(user_pick < 1 || user_pick > 4){
            printf("Invalid number of choices \n");
            continue;
        }
        matchsticks -= user_pick;

    if(matchsticks == 1){
        printf("You have only 1 matchstick left. You lose the game! \n");
        break;
    }

    computer_pick = 5 - user_pick;
    printf("Computer picks %d matchsticks \n", computer_pick);
     
     matchsticks -= computer_pick;
    if(matchsticks == 1){
        printf("Computer has only one matchstick left. You won the game! \n");
        break;
    }
    } 
    return 0;
}