//1. Task
#include <stdio.h>



int main() {
    int grades[101] = {0};
    int grade;

    // Input loop
    printf("Enter a grade (-1 to quit): ");
    while (scanf("%d", &grade) == 1 && grade != -1) {
        if (grade>=0 && grade<=100){
            grades[grade]++;
        }
        else{
            printf("Wrong grade, please enter a true value.");
        }
        printf("Enter a grade(Type -1 to exit): \n");
    }
    for (int i = 0; i<=100;i++){
        if (grades[i] >0){
            printf("%d: ",i);
            for(int j = 0; j<grades[i];j++){
                printf("*");
            }
            printf("\n");
        }
    }


    return 0;
}

//2. Task
/*
#include <stdio.h>

int main (void) {
    int array_size;
    printf("Enter array size: \n");
    scanf("%d",&array_size);
    int array[array_size];
    for (int i = 1; i<=array_size;i++){
        printf("Enter value: \n");
        scanf("%d",&array[i]);
    }
    int counter = 0;
    int counter_max = 0;
    for (int i = 0;i<array_size;i++){
        if (array[i]<array[i+1]){
            counter +=1;
        }else{
            if (counter>counter_max){
                counter_max = counter;
            }
            counter = 0;
        }
    }
    printf("%d",counter_max);













    return 0;
}*/