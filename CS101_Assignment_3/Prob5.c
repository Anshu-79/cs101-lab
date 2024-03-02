#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int digits = log10(n) + 1;
    
    printf("The number of digits in %d = %d", n, digits);
}