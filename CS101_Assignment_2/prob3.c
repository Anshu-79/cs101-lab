#include <stdio.h>

int main() {
    int units;
    float cost = 0;

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        cost = units * 0.5;
    }
    else if (units <= 150) {
        cost = (units - 50) * 0.75 + 50 * 0.5;
    }
    else if (units <= 250) {
        cost = (units - 150) * 1.2 + 100 * 0.75 + 50 * 0.5;
    }
    else if (units > 250) {
        cost = (units - 250) * 1.5 + 100 * 1.2 + 100 * 0.75 + 50 * 0.5;
    }

    cost += cost * 0.2;

    printf("Total electricity bill: %.2f", cost);
    
}