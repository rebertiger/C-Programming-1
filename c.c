#include <stdio.h>

// girilen tarihin dogrulugunu kontrol edilir
int date_checker(int day, int month, int year) {
    if (day < 1 || month <1 || month > 12 ){
        return 0;
    }
    //her ayin cektigi gun
    int month_days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    // yil artik yil ise subat 29 ceker
     if ((year % 4 == 0 && year %100 != 0) || (year %400 == 0)){
        month_days[1]=29;
     };
     if (day>month_days[month-1]){
        return 0;
     }
     return 1;

}
// dogru girilen tarihin bir sonraki gunu hesaplanir
void nextday(int day, int *newday, int month, int *newmonth, int year, int *newyear){
    int month_days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){month_days[1]=29;};
    //sadece gun arttirilir
    if (day<month_days[month-1]){
        *newday = day+1;
        *newmonth = month;
        *newyear = year;
    }
    //ay sonunda ay arttirilir
    else if(month<12){
        *newday = 1;
        *newmonth = month+1;
        *newyear = year;
    }
    //yilbasinda yil arttirilir
    else{
        *newday = 1;
        *newmonth = 1;
        *newyear = year+1;
    }
}

int main(void){
    int day,month,year, newday,newmonth,newyear;
    printf("Welcome to Calendar app\n");
    
    
    while(1){
        printf("Enter a date (00 00 00 to quit.): \n");
        scanf("%d %d %d",&day,&month,&year);
        if (day == 0 && month == 0 && year == 0){
            printf("Thanks for using our calendar!\n");
            break;
        }
        if (date_checker(day,month,year)){
            nextday(day,&newday,month, &newmonth, year, &newyear);
            printf("The next day of %d.%d.%d is %d/%d/%d\n",day,month,year,newday,newmonth,newyear);
        }else{
            printf("Please enter a real date to calculate.\n");
        }
    }









    return 0;
}

    