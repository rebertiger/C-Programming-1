#include <stdio.h>
#include <math.h>
int main(void){
    double first;
    double second;
    char operator;
    double result;

    printf("'+','-','*','/' Which one?: ");
    scanf("%c",&operator);
    printf("First number: ");
    scanf("%lf",&first);
    printf("Second number: ");
    scanf("%lf",&second);

    switch(operator){
        case '+':
            result = first + second;
            printf("Result is %0lf\n",result);
            break;
        case '-':
            result = first - second;
            printf("Result is %lf\n",result);
            break;
        case '*':
            result = first * second;
            printf("Result is %lf\n",result);
            break;
        case '/':
            result = first / second;
            printf("Result is %lf\n",result);
            break;
        default:
            printf("%c is not a defined operator.",operator);
            break;
    }











    return 0;
}