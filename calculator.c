#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}


int main() {
    int n1, n2, choice, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("\n\n1 = Addition\n");
    printf("2 = Subtration\n");
    printf("3 = Multiplication\n");
    printf("4 = Division\n");
    printf("Choose an operation to do: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = add(n1,n2);
        break;
    
    case 2:
        result = sub(n1,n2);
        break;
    
    case 3:
        result = mul(n1,n2);
        break;
    
    case 4:
        result = divide(n1,n2);
        break;

    default:
        printf("Invalid input\nExiting...");
        break;
        exit(1);
    }

    printf("The result is: %d", result);


}