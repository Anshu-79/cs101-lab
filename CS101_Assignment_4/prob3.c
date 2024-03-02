#include <stdio.h>

int main() {
    int n;
    int octalN = 0, placeVal = 1;
    printf("Enter number: ");
    scanf("%d",&n);

    while (n != 0) {
        octalN += n % 8 * placeVal;
        placeVal *= 10;
        n /= 8;
    }
    printf("Octal value: %d", octalN);
}