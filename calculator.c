#include <stdio.h>
#include <math.h>

int main(void){
    char operator;
    double first;
    double second;
    double result;

    printf("'+','-','*','/' Which one?: ");
    scanf("%s",&operator);
    printf("First number: ");
    scanf("%lf",&first);
    printf("Second number: ");
    scanf("%lf",&second);
    
        if(operator == '+'){
            result = first + second;
            printf("%lf\n",result);
        }
        else if (operator =='-'){
            result = first - second;
            printf("%lf\n",result);
        }
        else if(operator == '*'){
            result = first * second;
            printf("%lf\n",result);
        }
        else if(operator =='/'){
            result = first / second;
            printf("%lf\n",result);
        }
        else{
            printf("Wrong operator, it's not defined.");
        }










    return 0;
}