/* ******** Problem 1 **************/
#include <stdio.h>


void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}



int main(void)
{
int x, y;
x = 5;
y = 10;
swap(&x, &y);
printf("x = %d, y = %d\n", x, y); // x = 10, y = 5
return 0;
}

/* *********** Problem 2 ***********
    #include <stdio.h>

    void reverseString(char *string) {
        int length = 0;
        while (string[length] != '\0') {
            length++;
        }

        int start = 0;
        int end = length - 1;

        while (start < end) {
            char temp = string[start];
            string[start] = string[end];
            string[end] = temp;
            start++;
            end--;
        }
    }

    int main(void) {
        char string[] = "I feel!";
        reverseString(string);
        printf("%s", string); // Output: !leef I
        return 0;
    }
*/

/* ********** Problem 3 **********

    #include <stdio.h>

    void vowelCount(char *string, int *counts){
        while (*string!='\0'){
            if (*string =='a') counts[0]++;
            else if (*string == 'e') counts[1]++;
            else if (*string == 'i') counts[2]++;
            else if (*string == 'o') counts[3]++;
            else if (*string == 'u') counts[4]++;
            string++;
            }
            
        }


    int main(void)
    {
    char string[] = "i feel, therefore i am";
    int counts[5] = {0};
    char vowels[] = "aeiou";
    vowelCount(string, counts);
    for(int i = 0; i < 5; i++)
    printf("the number of %c = %d \n", vowels[i], counts[i]);
    return 0;
    }
*/


