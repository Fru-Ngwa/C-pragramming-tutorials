#include<stdio.h>
int main() {
    int num, i=1, sum=0;
    printf("Enter an integer to print its sum from 1 to that number: ");
    scanf("%d", &num);
    while(i <= num) {
        sum += i;
        i++;
    }
    printf("The sum of integers from 1 to %d is: %d\n", num, sum);
    return 0;
}