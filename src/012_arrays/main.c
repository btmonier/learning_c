#include <stdio.h>

int main() {
    int numbers[5] = { 1, 2, 3, 4, 5 };

    numbers[0] = 10;
    numbers[4] = 50;

    printf("First element: %d\n", numbers[0]);
    printf("Last element:  %d\n", numbers[4]);

    return 0;
}
