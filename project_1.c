#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
       int random_number;
       int guessing_number;
       int number_of_guess=0;
       srand(time(NULL));
    printf("WEILCOME TO THE WORLD OF NUMBER GUESSING GAME \n");
    random_number=rand() * 100 + 1 ; // generating random number between 1 to 100

    do {
        printf("\n please enter your guess number between (1 - 100): ");
        scanf("%d",&guessing_number);
        //number of attemps is ++ whenever user enter a number
        number_of_guess++;

        if(guessing_number<random_number){
            printf("guess larger number . \n");
        } else if(guessing_number>random_number){
            printf("guess smaller number . \n");
        } else{
            printf(" CONGRATULATIONS ! you have succesfully guessed the number in %d attempts ",number_of_guess);
        }

    }while(guessing_number != random_number);
    printf("\n Thanks for Playing.");
    printf("\n  Created by MUskan");
    
    return 0;
}