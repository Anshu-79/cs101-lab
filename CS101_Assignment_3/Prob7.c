#include <stdio.h>

int main() {
    
    float sum = 0;
    float n;

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%f",&n);

        sum += n;
    }

    printf("The sum of given numbers is %.2f\n", sum);
    printf("The average of given numbers is %.2f\n", sum/10);
}