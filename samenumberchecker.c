#include <stdio.h>

int main (int argc, char *argv[]) {


    while(1){
        int first,second,third;
        printf("Enter first value: \n");
        scanf("%d",&first);
        printf("Enter second value: \n");
        scanf("%d",&second);
        printf("Enter third value: \n");
        scanf("%d",&third);


        if (first == second && second == third){
            printf("3 of them are same\n");
        }
        else if ((first == second && second !=third && first != third) || (first != second && second == third && first != third) || (first != second && second != third && first == third)){
            printf("2 of them are same\n");
        }
        else {
            printf("Values are all diffrent\n");
        }
    }
    return 0;
}