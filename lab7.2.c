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
}