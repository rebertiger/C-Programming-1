#include <stdio.h>
int main(void){
    int my_birthmonth;
    int my_birthday;
    int your_birthmonth;
    int your_birthday;

    printf("In which month did you born?: \n");
    scanf("%d", &my_birthmonth);
    printf("In which day did you born?: \n");
    scanf("%d",&my_birthday);
    printf("In which month did your friend born?: \n");
    scanf("%d",&your_birthmonth);
    printf("In which day did your friend born?: \n");
    scanf("%d",&your_birthday);


    printf("Your birthday is %d.%d.2004\n",my_birthday,my_birthmonth);
    printf("Your friends birthday is %d.%d.2004.",your_birthday,your_birthmonth);







    return 0;
}