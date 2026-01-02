#include<stdio.h>
int main(){
    int day;
    printf("Enter a number (1-5) to get the corresponding day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 5.\n");
    }

    return 0;
}