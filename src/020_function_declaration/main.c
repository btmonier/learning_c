#include <stdio.h>

// Declare location
//   mainly needed for code optimization - declare first (before main)
void f();
int g(int x, int y); // optional but good practice to define params
//int g();

int main() {
    f();

    int res = g(5, 3);
    printf("g() res: %d\n", res);
    return 0;
}

void f() {
    printf("I got called (f)\n");
}

int g(int x, int y) {
    return x + y;
}

