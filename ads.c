#include <stdio.h>

int main (void) {

    double salary;
    double hourlySalary;
    int workHour;
    

    printf("How much dollar do you earn for an hour?: \n");
    scanf("%lf",&hourlySalary);
    printf("How many hours did you work last month?: \n");
    scanf("%d",&workHour);
    if (workHour>40){
        salary = ((workHour - 40)*hourlySalary*1.5) + 40*hourlySalary;
        printf("Your income is %lf dollars",salary);
    }
    else{
        salary = workHour*hourlySalary;
        printf("Your income is %lf dollars",salary);
    }

    
    return 0;
}