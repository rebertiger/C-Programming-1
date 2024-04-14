#include <stdio.h>

int isVowel(){
    char character;
    printf("Enter a character to check: \n");
    scanf("%c",&character);
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') return 1;
    else return 0;
}

int main (void) {
    int result = isVowel();
    printf("%d",result);
    return 0;
}