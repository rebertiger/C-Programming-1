#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    char isRolled;
    int number;
    int isWorking = 1;
    while(isWorking == 1){
            printf("\nPress enter to roll the dice.\n");
        scanf("%c",&isRolled);
        if (isRolled == 'q'){
            break;
        }
        srand(time(NULL));
        number = (rand() % 6)+1;
        if(number == 1){
            printf("11111!");
        }
        else if (number == 2){
            printf("22222!");
        }
        else if (number == 3){
            printf("33333!");
        }
        else if (number == 4){
            printf("44444!");
        }
        else if (number == 5){
            printf("55555!");
        }
        else if (number == 6){
            printf("66666!");
        }
    }


    return 0;
}