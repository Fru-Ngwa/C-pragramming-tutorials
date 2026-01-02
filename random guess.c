#include <stdio.h>

int main() {
    int low = 1, high = 100, mid;
    char response;

    printf("Think of a number between 1 and 100.\n");

    while (low <= high) {
        mid = (low + high) / 2;
        printf("Is your number %d? (h/l/c): ", mid);
        scanf(" %c", &response);

        if (response == 'c') {
            printf("I guessed it! 😎\n");
            break;
        } else if (response == 'h') {
            high = mid - 1;
        } else if (response == 'l') {
            low = mid + 1;
        }
    }

    return 0;
}
