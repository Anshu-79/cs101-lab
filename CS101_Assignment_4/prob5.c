#include <stdio.h>

int main() {
    int n = 9;
    int spaces = 0, stars = n;
    for (int i = 0; i < (n+1)/2; i++) {
        for (int k = 0; k < spaces; k++)
            printf(" ");
        for (int j = 0; j < stars; j++)
            printf("*");
        
        spaces++;
        stars -= 2;
        printf("\n");
    }
    
    // Cursor adjustment before bottom half of pyramid 
    spaces--;
    stars += 2;

    for (int i = 0; i < (n-1)/2; i++) {
        spaces--;
        stars+=2;

        for (int j = 0; j < spaces; j++)
            printf(" ");
        for (int k = 0; k < stars; k++)
            printf("*");
        
        printf("\n");
    }

}