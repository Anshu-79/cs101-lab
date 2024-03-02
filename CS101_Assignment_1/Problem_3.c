#include <stdio.h>

int main () {
    float P, R, T;
    printf("Enter Principal Amount: ");
    scanf("%f",&P);
    printf("Enter Rate of Interest: ");
    scanf("%f",&R);
    printf("Enter Time Duration: ");
    scanf("%f",&T);

    float SI = P * R * T / 100;

    printf("The Simple Interest: %.2f", SI);

    return 0;   
}