#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    switch (n%2)
    {
    case 0:
        printf("%d is even",n);
        break;
    
    case 1:
        printf("%d is odd",n);
    default:
        break;
    };

}