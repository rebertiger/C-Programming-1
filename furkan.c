#include <stdio.h>

int main (void) {
    int workHour;
    double hourlyWage;
    double salary;

    printf("Enter your hourly wage: \n");
    scanf("%d",&workHour);
    printf("How much dollars do you earn per hour?: \n");
    scanf("%lf",&hourlyWage);


    if(workHour<=40){
        salary = workHour*hourlyWage;
        printf("Your salary is %lf",salary);
    }
    else{
        int overtime = workHour -40;
        salary = (overtime * 1.5 * hourlyWage)+((workHour-overtime)*hourlyWage);
        printf("Your salary is %lf", salary);
    }

    return 0;
}