#include <stdio.h>

int main () {
    int a, b, c;
    int largest, smallest;

    printf("Enter 3 numbers separated by a space: ");
    scanf("%d %d %d", &a, &b, &c);

    switch ((int) a > b) {
    case 1:
        switch ((int) a > c)
        {
        case 1:
            largest = a;
            switch ((int) b < c) {
            case 1:
                smallest = b;
            case 0:
                smallest = c;
            }

        case 0:
            largest = c;
            switch ((int) a < b) {
                case 1:
                    smallest = b;
                case 0:
                    smallest = c;
            }
        }
        
    case 0:
        switch ((int) b > c)
        {
        case 1:
            largest = b;
            smallest = -1;
        case 0:
            largest = c;
            smallest = a;
        }
    
    default:
        printf("%d\n", largest);
        printf("%d\n", smallest);
        printf("%d\n", (a + b + c) / 3);
        int ap_check = 2*b == a + c;
        int gp_check = b*b == a * c;
        
        switch (ap_check) {
            case 1:
                printf("yes\n");
                break;
            case 0:
                printf("no\n");
                break;
        }
        switch (gp_check) {
            case 1:
                printf("yes\n");
                break;
            case 0:
                printf("no\n");
                break;
        }
    }
}