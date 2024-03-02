#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int factorial = 1;
    while (n > 0) {
        factorial *= n;
        n--;
    }
    return factorial;
}

int main() {
    int n;
    printf("Input rows: ");
    scanf("%d", &n);
    int spaces = n-1;
    int nums = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < spaces; j++)
            printf(" ");
        for (int k = 0; k < nums; k++) {
            int c = factorial(i) / (factorial(i - k) * factorial(k));
            printf("%d ", c);
        }
        spaces--;
        nums++;
        printf("\n");
        
    }
}