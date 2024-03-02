#include <stdio.h>

int main() {
    int n;
    int factorial = 1;
    printf("Enter number: ");
    scanf("%d",&n);

    while (n > 0) {
        factorial *= n;
        n--;
    }

    printf("Factorial = %d", factorial);
}