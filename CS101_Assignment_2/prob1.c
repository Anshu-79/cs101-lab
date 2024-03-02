#include <stdio.h>

int main() {
    char a;
    printf("Enter an alphabet: ");
    scanf("%c", &a);
    
    if (a >= 'A' && a <= 'Z')
        a += 32;

    if (a >= 'a' && a <= 'z') {
        
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            printf("%c is a vowel\n", a);
        }
        else {
            printf("%c is a consonant\n", a);
        }
    }
    else {
        printf("%c is not an alphabet\n",a);
    }
}