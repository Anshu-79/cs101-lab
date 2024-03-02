#include <stdio.h>

int main() {
    int add_num = 1;
    int n;
    int positive = 0, negative = 0, zero = 0;

    do {
        printf("Enter number: ");
        scanf("%d",&n);

        if (n > 0)
            positive++;
        else if (n < 0)
            negative++;
        else
            zero++;
        
        printf("Add more numbers?\n");
        printf("Type 1 for YES & 0 for NO: ");
        scanf("%d",&add_num);
        
    } while (add_num == 1);

    printf("Total positive numbers = %d\n", positive);
    printf("Total negative numbers = %d\n", negative);
    printf("Total zeros = %d\n", zero);
    

}