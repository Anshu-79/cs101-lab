#include <stdio.h>
#include <string.h>

int main() {

    char num[1001];
    printf("Enter number: ");
    scanf("%s", &num);

    char first_digit = num[0];
    char last_digit = num[strlen(num) - 1];

    printf("The first digit is: %c\n", first_digit);
    printf("The last digit is: %c\n", last_digit);
}