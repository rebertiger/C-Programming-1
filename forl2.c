#include <stdio.h>

int main (void) {
    for(int i = 8;i<=23;i+=3)
    {
        for (int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;   

}