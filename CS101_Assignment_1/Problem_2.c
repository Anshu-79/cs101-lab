#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    float quotient = a / b;

    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,diff);
    printf("%d * %d = %d\n",a,b,product);
    printf("%d / %d = %.2f\n",a,b,quotient);

    return 0;
}