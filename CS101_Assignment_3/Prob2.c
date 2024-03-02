#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b , c, disc, x1, x2;

    printf("Quadratic Equation: ax^2 + bx + c = 0\n");
    
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);

    disc = b*b - 4*a*c;

    switch ((int) (disc >= 0))
    {
    case 0:
        printf("Given quadratic has complex roots.\n");
        break;
    
    case 1:
        x1 = (-b - sqrt(disc))/2*a;
        x2 = (-b + sqrt(disc))/2*a;

        printf("The roots of given quadratic are: %.2f and %.2f\n", x1, x2);

    default:
        break;
    }
}