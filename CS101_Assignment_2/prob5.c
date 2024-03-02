#include <stdio.h>

int main() {
    float salary;
    printf("Enter basic salary: ");
    scanf("%f",&salary);

    if (salary <= 10000) {
        salary += salary * 0.2 + salary * 0.8;
    }
    else if (salary > 10000 && salary <= 20000) {
        salary += salary * 0.25 + salary * 0.9;
    }
    else {
        salary += salary * 0.3 + salary * 0.95;
    }

    printf("Gross salary: %.2f", salary);
}