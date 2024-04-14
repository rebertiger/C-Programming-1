
#include <stdio.h>
int main (void){
    float x_axis;
    float y_axis;

    printf("X axis of the point: \n");
    scanf("%f",&x_axis);
    printf("Y axis of the point: \n");
    scanf("%f",&y_axis);

    if(x_axis > 0 && y_axis > 0){
        printf("Quadrant is 1 (+,+).");
    }
    else if (x_axis < 0 && y_axis > 0 ){
        printf("Quadrant is 2 (-,+).");
    }
    else if(x_axis < 0 && y_axis < 0 ){
        printf("Quadrant is 3 (-,-).");
    }
    else if(x_axis > 0 && y_axis < 0){
        printf("Quadrant is 4 (+,-).");
    }
    else if (x_axis = 0 && y_axis !=0){ 
        printf("Point is on Y axis.");
    }
    else if (x_axis !=0 && y_axis == 0){
        printf("Point is on X axis.");
    }
    else if (x_axis == 0 && y_axis == 0){
        printf("Point is on origin");
    }



    return 0;
}