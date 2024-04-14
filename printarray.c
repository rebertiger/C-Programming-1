#include <stdio.h>

int main (void) {
    
    /*double prices[] = {1.0,2.0,3.0,4.0,5.0};

    for (int i = 0 ; i<5;i++){
        printf("Price is %lf\n",prices[i]);
    }*/

    double prices[] = {5.0,10.0,15.0,20.0,25.0,30.0};
    for (int i = 0; (i < sizeof(prices)/sizeof(prices[0]));i++){
        printf("Price is %lf\n",prices[i]);
    }




    return 0;
}