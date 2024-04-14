#include <stdio.h>
#include <math.h>
int main(void){
    double first,second,third,average,minimum,maximum;

    printf("First value: \n");
    scanf("%lf",&first);
    printf("Second value: \n");
    scanf("%lf",&second);
    printf("Third value: \n");
    scanf("%lf",&third);

    minimum = fmin(first,second);
    minimum = fmin(minimum,third);
    maximum = fmax(first,second);
    maximum = fmax(maximum,third);
    average = (first+second+third)/3;
    
    printf("STATISTICS:\nMinimum Value: %lf.\nMaximum Value: %lf.\nAverage: %lf.\n", minimum, maximum, average);




    return 0;
}