#include <stdio.h>

int main() {
    int n, x, sum=0;
    printf("Enter n: ");
    scanf("%d",&n);

    // making an array of n distinct numbers as mentioned in problem
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter a distinct number between 0 and n (including 0 & n): ");
        scanf("%d",&x);
        arr[i] = x;
    }

    //finds sum of all numbers in array
    for (int i=0; i < n; i++)
        sum += arr[i];

    //sum of all numbers from 0 to n by mathematical formula
    int theoretical_sum = (n * (n+1)) / 2;

    //difference of sum obtained & theoretical formula gives missing number
    int missing_num = theoretical_sum - sum;

    printf("The number missing from array is: %d\n", missing_num);    
}