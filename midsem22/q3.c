#include <stdio.h>

int product(int num) {
    int prod = 1, sum=0;
    for (int i = 10; i < num*10; i*=10)
        prod *= ((num % i) - (num % (i/10)))/(i/10);
    return prod;
}

int reverse(int num) {
    int rev = 0, digit, power;
    for (int i = 10; i < num*10; i*=10) {
        digit = ((num % i) - (num % (i/10)))/(i/10);
        power = (10000 / i);
        rev += digit * power;
    }
    return rev;
}

int main() {
    int n;
    printf("Enter a 4 digit number: ");
    scanf("%d",&n);

    int prod = product(n);
    printf("%d\n",prod);

    printf("%d",reverse(n));
}