#include <stdio.h>

int main() {
    float divVal1 = 5 / 2;
    float divVal2 = (float) 5 / 2;
    float divVal3 = 5 / 2.0;

    printf("My float value (1): %.2f\n", divVal1);
    printf("My float value (2): %.2f\n", divVal2);
    printf("My float value (3): %.2f\n", divVal3);
    return 0;
}
