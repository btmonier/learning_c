#include <stdio.h>

int main(void) {
    int x = 10;
    int *ptr = &x;

    printf("Value: %d\n", x);
    printf("Pointer address: %p\n", (void*)ptr);
    printf("Pointer dereference: %d\n", *ptr);

    return 0;
}
