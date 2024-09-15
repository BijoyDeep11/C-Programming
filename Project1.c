#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int randomnumber = (rand() % 100)+1;
    int no_of_guesses = 0;
    int guessed;
    do
    {
        printf("Guess...");
        scanf("%d", &guessed);
        if(guessed>randomnumber){
            printf("Lower number please!\n");
        }
        else if(guessed<randomnumber){
            printf("Higher number please!\n");
        }
        no_of_guesses++;
    } while (guessed!=randomnumber);
    printf("Congrats!You guessed the number in %d guesses", no_of_guesses);
    return 0;
}