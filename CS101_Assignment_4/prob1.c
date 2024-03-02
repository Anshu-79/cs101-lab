#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter number: ");
    scanf("%d",&n);

    for (int i=10; i<n*10; i=i*10) {
        sum += (n%i - sum)/(i/10);
    }

    printf("The sum of digits is: %d", sum);
}