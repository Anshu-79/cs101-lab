#include <stdio.h>

int main() {
    int n;
    int sum = 0, neg_count=0;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n > 0)
            sum += n;
        else if (n < 0)
            neg_count++;
    } while (n != 0);

    printf("Sum of positive numbers entered: %d\n", sum);
    printf("Number of negative numbers entered: %d\n", neg_count);
}