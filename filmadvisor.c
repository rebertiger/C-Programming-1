#include <stdio.h>

int main (void) {

    double cost,stars;
    printf("How much dollar is the ticket for the movie?: \n");
    scanf("%lf",&cost);
    printf("How many stars did the movie got from public?: \n");
    scanf("%lf",&stars);

    if ((cost<5.00) || (cost<12.00 && stars == 5.0)){
        printf("You`ll be very interested to this movie!\n");
    }
    else if (cost > 12.00 && stars == 5.0){
        printf("You're sort of interested.");
    }
    else if (cost > 12.00){
        printf("You`ll not be interested to this movie, its too expensive for your scale.");
    }
    else if (cost >= 5.0 && cost < 12 && stars > 2 && stars < 4){
        printf("You're sort of interested in seeing this movie.");
    }
    else{
        printf("You're not interested.");
    }

    return 0;
}