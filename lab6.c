#include <stdio.h>
#include <stdlib.h>

double avg(double first, double second){
    return (first+second)/2;
}
double negpow(double number,int power){
    double result = 1;
    if (power>=0){
        for (int i = 1;i<=power;i++){
        result *= number;
    }
        return result;
    }
    else{
        power = abs(power);
        for (int i = 1; i<=power;i++){
            result *=number;
        }
        result = 1/result;
        return result;
    }
}

int digitRange(int number){
    if (number<10){
        return 1;
    }
    int digitMax = 0;
    int digitMin = 9;
    while (number>0){
        int digit = number % 10;
        if (digit>digitMax){
            digitMax = digit;
        }
        if (digit<digitMin){
            digitMin = digit;
        }
        number = number/10;
              
    }
    return digitMax-digitMin+1;
}

int main (void) {
    printf("%lf\n", avg(-2.0, 1.0)); // -0.5
    printf("%lf\n", negpow(-2.0, 3)); // -8.0
    printf("%lf\n", negpow(4.0, -2)); // 0.0625
    printf("%d\n", digitRange(68437)); // 6
    printf("%d\n", digitRange(3)); // 1

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////

