#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 0; i < n*2 - 1; i++) {
        for (int j = 0; j < n*2 - 1; j++) {
            if (j == 0 || j == 6 || i == 0 || i == 6)
                printf("%d ",n);
            else if (j == 1 || j == 5 || i == 1 || i == 5)
                printf("3 ");
            else
                printf("2 ");
        }
        printf("\n");
    }
}