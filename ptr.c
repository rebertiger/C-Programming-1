#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[30];
    char *p = s;
    
    // Copy "Lubna " to the array s
    strcpy(s, "Lubna ");
    
    // Concatenate "El-Kurtuba" to the string pointed by p
    strcat(p, "El-Kurtuba");
    
    // Print the concatenated string
    printf("%s\n", p);
    
    // Increment the character pointed by p by 6
    *p += 6;
    
    // Set the character pointed by p to 'o'
    *p = 'o';
    
    // Move the pointer p to the next character
    p++;
    
    // Set the character pointed by p to 'f'
    *p = 'f';
    
    // Move the pointer p to the next character
    p++;
    
    // Set the character pointed by p to ' '
    *p = ' ';
    
    // Move the pointer p to the next character
    p++;
    
    // Set the character pointed by p to '\0' (null terminator)
    *p = '\0';
    
    // Concatenate "Cordoba" to the array s
    strcat(s, "Cordoba");
    
    // Print the final string stored in array s
    printf("%s\n", s);
    
    // Print the length of the string pointed by p and the difference between p and s
    printf("%d %d\n", strlen(p), p - s);

    return 0;
}