#include <stdio.h>

int main() {
    int len, num;
    int sum = 0;
    int choice;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&num);
        arr[i] = num;
    }
    int largest = arr[0], smallest = arr[0];

    for (int i = 0; i < len; i++) {
        sum += arr[i];
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    while (choice != 6) {
        printf("\n1 = Find the sum of all elements in the array.\n");
        printf("2 = Find the largest element in the array.\n");
        printf("3 = Find the smallest element in the array.\n");
        printf("4 = Calculate the average of all elements in the array.\n");
        printf("5 = Display the array in reverse order.\n");
        printf("6 = Exit the program.\n");
        printf("Choose a function to execute: ");
        scanf("%d",&choice);

        if (choice == 1)
            printf("\nThe sum of given array = %d\n\n", sum);
        else if (choice == 2)
            printf("\nThe largest number in given array = %d\n\n", largest);
        else if (choice == 3)
            printf("\nThe smallest number in given array = %d\n\n", smallest);
        else if (choice == 4)
            printf("\nThe average of given array = %d\n\n", sum/len);
        else if (choice == 5) {
            for (int i = len-1; i >= 0; i--)
                printf("%d ", arr[i]);
            printf("\n\n");
        }
        else if (choice == 6)
            printf("\nExiting program...\n");
        else
            printf("\nInvalid input. Please try again\n");
    }
}