#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(void){

    int userChoice;
    int compChoise;

    printf("\n******Welcome to Rock Paper Scissors Game!******");
    printf("\nLet's start!\nEnter 9 to exit the game.");
    sleep(1);

    while(1){
    sleep(1);
    printf("\n\nWhich one do you pick?:\n1:ROCK\n2:PAPER\n3:SCISSORS\n");
    scanf("%d",&userChoice);
    srand(time(0));
    compChoise = (rand() % 3)+1;
    if (userChoice == 9){
        break;
    }
    if (compChoise == 0){
        compChoise = 1;
    }
    if ((userChoice == 1 && compChoise == 3)){
        printf("\n\nYOU'RE ROCK\nCOMP IS SCISSORS\nYOU WIN");
    }
    else if (userChoice == 1 && compChoise == 2){
        printf("\n\nYOU'RE ROCK\nCOMP IS PAPER\nCOMP WINS");
    }
    else if (userChoice == 1 && compChoise == 1){
        printf("\n\nEQUAL!!");
    }
    else if((userChoice == 2 && compChoise == 1)){
        printf("\n\nYOU'RE PAPER\nCOMP IS ROCK\nYOU WIN");
    }
    else if (userChoice == 2 && compChoise == 3){
        printf("\n\nYOU'RE PAPER\nCOMP IS SCISSORS\nCOMP WINS");
    }
    else if (userChoice == 2 && compChoise == 2){
        printf("\n\nEQUAL!!");
    }
    else if((userChoice == 3 && compChoise == 2 )){
        printf("\n\nYOU'RE SCISSORS\nCOMP IS PAPER\nYOU WIN");
    }
    else if (userChoice == 3 && compChoise == 1){
         printf("\n\nYOU'RE SCISSORS\nCOMP IS ROCK\nCOMP WINS");
    }
    else if (userChoice == 3 && compChoise == 3){
        printf("\n\nEQUAL!!");
    }
   
    }
    
    






    return 0;
}