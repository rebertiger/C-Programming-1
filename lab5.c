#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int range = rand()%4+2;
    int live = 3;
    int total = 0;
    int guess;
    srand(time(0));
    while(live !=0){
        int numbers[range];
        numbers[0]=0;
        for (int i = 1; i<=range;i++){
            int a = rand()%10+1;
            numbers[i] = a;
        }
        for(int j = 1;j<=range-1;j++){
            total += numbers[j];
            printf("%d+",numbers[j]);
        }
        total += numbers[range];
        printf("%d = ",numbers[range]);
        printf("What is your guess? \n");
        scanf("%d",&guess);
        if (total != guess){
            printf("Answer was %d, you were wrong!\n",total,guess);
            live--;
            printf("You have %d lives left.\n",live);
            total = 0;
        }else{
            printf("Right!\n");
            total = 0;
        }
    }
    if (live == 0){
        printf("You lose\n");
    }

    return 0;
}