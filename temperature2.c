#include <stdio.h>
int main(void){
    double temperature_input;
    int unit;
    double temperature_output;
    printf("Which convert process do you want to do?\n1:Celcius to F\n2:F to Celcius: \n");
    scanf("%d",&unit);
    if (unit == 1){
        temperature_output = temperature_input * 18 / 10 + 32;
        printf("It is %lf",temperature_output);
    }















    return 0;
}