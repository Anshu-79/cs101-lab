#include <stdio.h>
#include <string.h>

int main() {
    char num[1001];
    printf("Enter number: ");
    scanf("%s",&num);

    char first_digit = num[0];
    
    num[0] = num[strlen(num) - 1];
    num[strlen(num) - 1] = first_digit;

    printf("The result is %s\n", num); 
}