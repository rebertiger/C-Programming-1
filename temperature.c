#include <stdio.h>
#include <ctype.h>

int main(void){
    char unit;
    float temperature;
    printf("\nWhich unit would you use, (C) or F()?: ");
    scanf("%c", &unit);
    unit = toupper(unit);
    
    if(unit == 'C'){
        printf("\nWhat's the temperature in C now?: ");
        scanf("%f",&temperature);
        temperature = temperature * 9 / 5 +32;
        printf("\nTemperature is %f F.",temperature);
    }
    else if(unit == 'F'){
        printf("\nWhat's the temperature in F now?: ");
        scanf("%f",&temperature);
        temperature = 5 *(temperature - 32) / 9;
        printf("Temperature is %f C.",temperature);
    }
    else{
        printf("Undefined unit type. Please enter an existing unit.");
    }



    return 0;
}