#include <stdio.h>
#define len 10

void exchange(int arr[], int a, int b);

void arrange_dec_min(int arr[]);

int main() {
    int n;
    int array[len];

    for (int i = 0; i < len; i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&n);
        array[i] = n;
    }

    arrange_dec_min(array);
}

void exchange(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


void arrange_dec_min(int arr[]) {
    int end = len - 1;
    while (end > 0) {
        int min_index = 0;
        for (int i = 0; i <= end; i++) {
            if (arr[i] < arr[min_index])
                min_index = i;
        }
        exchange(arr, min_index, end);
        end--;
    }
        
}