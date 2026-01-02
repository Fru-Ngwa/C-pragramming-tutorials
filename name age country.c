#include <stdio.h>
int main() {
    char name[50];
    int age;
    char country[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your dream country country: ");
    fgets(country, sizeof(country), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Your dream country is: %s\n", country);

    return 0;
}