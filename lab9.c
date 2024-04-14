#include <stdio.h>
#include <string.h>
int isPalindrome(const char *word) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return 0;
        }
    }


    return 1; 
}






int main(void) {
    char *word1 = "madam";
    char *word2 = "tucan";

    printf("%s%s%s\n", word1, isPalindrome(word1) ? " is " : " is not ", "a palindrome");
    printf("%s%s%s\n", word2, isPalindrome(word2) ? " is " : " is not ", "a palindrome");

    return 0;
}