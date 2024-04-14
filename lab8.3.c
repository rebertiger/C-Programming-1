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