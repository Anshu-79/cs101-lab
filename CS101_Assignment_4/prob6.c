#include <stdio.h>

int primeCheck();

int main() {
    int n; 
    printf("Enter number: ");
    scanf("%d",&n);

    if (n == 1)
        printf("1 has no prime factors");
    
    else if (primeCheck(n))
        printf("%d is itself a prime number.",n);

    else {
        printf("The prime factors of %d are:\n",n);
        for (int i = 2; i < n; i++) {
            if (n % i == 0 && primeCheck(i))
                printf("%d\n",i);
        }
    }
}

int primeCheck(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}