#include <stdio.h>
#include <math.h>


int main(void){
    double A_side;
    double B_side;
    double C_side;

    printf("\nEnter first known side: ");
    scanf("%lf", &A_side);

    printf("\nEnter second known side: ");
    scanf("%lf", &B_side);

    C_side = sqrt((A_side*A_side) + (B_side*B_side));
    printf("\nThird side`s length is %0.2lf",C_side);



    return 0;
}