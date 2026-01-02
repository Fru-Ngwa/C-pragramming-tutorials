#include<stdio.h>
int main() {
    int score;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score >= 50 && score <= 100) {
        printf("You have passed the exam.\n");
    } else if (score <50 && score >=0) {
        printf("You have failed the exam.\n");
    } else {
        printf("Invalid marks entered.\n");
        return 1;
    }
    return 0;
}