#include <stdio.h>

int fun(int *k) {
    *k+=1;
    printf("%d\n",*k);
    
    return 1;
}

int main() {
    int i = 2;
    int *ptr = &i;
    fun(&i);
    printf("%d\n",i);

    
}