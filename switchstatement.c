#include <stdio.h>

int main(void){
    char grade;
    printf("\nWhat`s your grade?: ");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("Good job man!");
        break;
    case 'B':
        printf("Well done, nice grade.");
        break;
    case 'C':
        printf("It's okay, but you have to work more.");
        break;
    case 'D':
        printf("At least it's not a F.");
        break;
    case 'F':
        printf("Don't sleep on it! You can't complate college if you keep doing this.");
        break;
        
    
    default:
        printf("Enter an existing grade to get your comment.");
        break;
    }




    return 0;
}