// Program for guess the number game//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get guess from user //
int get_guess(){
    char input[256];
    int guess;
    printf("Guess the number, enter a number from 1 to 10\n");
    printf("> ");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &guess);
    return guess;
}

void main(void){
    srand(time(NULL));

    int secret_num = rand()% 10;
    int lives = 3;
    int correct = 0;
    while(lives > 0){
        int a = get_guess();
        if (a > secret_num){
            printf("Nope, too high\n");
            lives --;
        }
        else if(a < secret_num){
            printf("Nope, too low\n");
            lives --;
        }
        else{
            printf("Well done, You guessed right!\n");
            correct = 1;
            break;
        }
        printf("Lives left: %d\n", lives);
    }
    printf("The number was %d\n", secret_num);

}




