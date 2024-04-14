#include <stdio.h>

void box(int a, int b){
    for (int i = 1;i<=b;i++){
        printf("*");
    }
    printf("\n");
    for (int i=1;i<=a-2;i++){
        printf("*");
        for (int j =1 ; j<=b-2;j++){
            printf(" ");
        }
        printf("*\n");
    }
    for (int i = 1;i<=b;i++){
        printf("*");
    }
}
int main (void) {
    box(5,10);
    return 0;
}