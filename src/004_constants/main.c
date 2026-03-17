#include <stdio.h>

int main() {
    int x = 2;
    const int y = 42;


    printf("x => %d\n", x);
    printf("y => %d\n", y);

    // Will NOT error!
    x = 8;

    // Will error!
    // y = 4;

    printf("x => %d\n", x);
    printf("y => %d\n", y);

    return 0;
}
