#include <stdio.h>

int main (void) {

    double first,second,third;
    double maxValue,minValue,average;
    printf("Enter first value: \n");
    scanf("%lf",&first);
    printf("Enter second value: \n");
    scanf("%lf",&second);
    printf("Enter third value: \n");
    scanf("%lf",&third);

    if (first > second && first > third){
        maxValue = first;
        printf("max value is %0.2lf",first);
        if (second>third){
            minValue = third;
            printf("min value is %0.2lf\n",minValue);
        }
        else{
            minValue = second;
            printf("min value is %0.2lf\n",minValue);
        }
    }
    else if (second > first && second > third){
        maxValue = second;
        printf("max value is %0.2lf\n",second);
        if (first > third){
            minValue = third;
            printf("min value is %0.2lf\n",minValue);
        }
        else{
            minValue = second;
            printf("min value is %0.2lf\n",minValue);
        }

    }
    else if (third > first && third >second){
        maxValue = third;
        printf("max value is %0.2lf\n",third);
        if(first > second){
            minValue = second;
            printf("min value is %0.2lf\n",minValue);
        }
        else{
            minValue = first;
            printf("min value is %0.2lf\n",minValue);
        }

    }

    average = (maxValue+minValue)/2;
    printf("Average of max and min number's is %0.2lf\n",average);




    return 0;
}