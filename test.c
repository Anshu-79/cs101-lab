#include <stdio.h>

int *func() {
    int x = 10;
    return &x;
}

int main() {
    int *p = func();
    printf("%d", *p);
    return 0;
}