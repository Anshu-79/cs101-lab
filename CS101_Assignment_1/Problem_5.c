#include <stdio.h>
#define pi 3.14

int main () {
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);

    float diameter = 2 * radius;
    float circum = 2 * pi * radius;
    float area = pi * radius * radius;

    printf("The diameter is: %.2f\n", diameter);
    printf("The circumference is: %.2f\n", circum);
    printf("The area is: %.2f\n", area);

    return 0;
}