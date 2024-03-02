#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("Enter first side of triangle: ");
    scanf("%d", &a);
    printf("Enter second side of triangle: ");
    scanf("%d", &b);
    printf("Enter third side of triangle: ");
    scanf("%d",&c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Given triangle is INVALID\n");
    }
    else {
        printf("Given triangle is VALID\n");
    }
}