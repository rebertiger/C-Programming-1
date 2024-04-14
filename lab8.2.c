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