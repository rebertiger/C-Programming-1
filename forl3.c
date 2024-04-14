#include <stdio.h>

int main (void) {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 6 - i; j++) {
            printf("-");
        }
        for (int k = 1; k <= num; k++) {
            printf("%d",num);     
        }
        num += 2;
        for (int j = 1; j <= 6 - i; j++) {
            printf("-");
        }
        printf("\n");
    }
    
    
    return 0;
    }

