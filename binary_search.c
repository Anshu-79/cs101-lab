#include <stdio.h>

int search(int arr[], int num);
int len;

int main() {
    int x;
    printf("Enter length: ");
    scanf("%d",&len);

    int arr[len];

    for (int i = 0; i < len; i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d", &x);
        arr[i] = x;
    }

    int index = search(arr, 2);
    printf("%d\n",index);
}

int search(int arr[], int num) {
    int start = 0, end = len - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == num)
            return mid;
        if (num < arr[mid])
            mid = end - 1;
        else if (num > arr[mid])
            mid = start + 1;
    }
    return -1;
        
    }
