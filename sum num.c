#include<stdio.h>
int main() {
    int number, sum = 0,count = 0;
    for (;;){
        printf("Enter an integer: ");
    scanf("%d", &number);
        if (number == 0) break;
        sum += number;
        count++;
    }
    printf("Sum of all numbers entered is: %d\n", sum);
    return 0;
}