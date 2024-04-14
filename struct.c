#include <stdio.h>


int main (void) {
    struct User{
        int hesapNo;
        int parola;
        double bakiye;
    };
    
    struct User user1 = {343118,1234,5010.0};

    printf("User's Number is %d\n",user1.hesapNo);
    printf("User's Password is %d\n",user1.parola);
    printf("User's money count is %0.2lf\n",user1.bakiye);
    return 0;

}