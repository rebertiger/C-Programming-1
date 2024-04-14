#include <stdio.h>

int main (void) {
printf("Enter how many days temperatures: \n");
int days;
scanf("%d",&days);
int temps[days];
for (int i = 0 ;i<days;i++){
    printf("Enter %d's high temp.",i+1);
    scanf("%d",&temps[i]);
}
for (int i=0;i<days;i++){
    printf("Day %d's high temp: %d\n",i+1,temps[i]);
}
double average;
for (int i = 0;i<days;i++){
    average+=temps[i];
}
average = average / days;
printf("Average temp = %lf\n",average);
int above_average = 0;
for (int i = 0;i<days;i++){
    if (average<temps[i]){
        above_average++;
    }
}
printf("%d days were above average.",above_average);
    return 0;
}