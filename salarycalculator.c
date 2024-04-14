#include <stdio.h>

int main(void){
    double hoursOnWork;
    double hourlyWage;
    double salary;
    double overtime;
    
    printf("How many hours your employee spent on work?: \n");
    scanf("%lf", &hoursOnWork);
    printf("How many dollars your employee earns an hour?: \n");
    scanf("%lf", &hourlyWage);

    if(hoursOnWork > 40){
        overtime = (hoursOnWork - 40);
        salary = (overtime * (hourlyWage * 1.5)) + ((hoursOnWork - overtime) * hourlyWage);
        printf("Your empolyee's salary is %0.2lf dollars.",salary);
    }
    else{
        salary = hourlyWage * hoursOnWork;
        printf("Your employee's salary is %0.2lf dollars.",salary);
    }











    return 0;
}