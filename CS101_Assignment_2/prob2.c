#include <stdio.h>

int main() {
    int physics, biology, cs, math, chem;
    
    printf("Enter Physics marks: ");
    scanf("%d",&physics);
    printf("Enter Biology marks: ");
    scanf("%d",&biology);
    printf("Enter Computer Science marks: ");
    scanf("%d",&cs);
    printf("Enter Mathematics marks: ");
    scanf("%d",&math);
    printf("Enter Chemistry marks: ");
    scanf("%d",&chem);

    float percentage = (physics + biology + cs + math + chem) / 5;

    if (percentage >= 90) {
        printf("Grade A\n");
    }
    else if (percentage >= 80) {
        printf("Grade B\n");
    }
    else if (percentage >= 70) {
        printf("Grade C\n");
    }
    else if (percentage >= 60) {
        printf("Grade D\n");
    }
    else if (percentage >= 40) {
        printf("Grade E\n");
    }
    else {
        printf("Grade F\n");
    }
}