#include <stdio.h>

/*
 * Notes:
 *   - Addresses in the stack DECREASE
 *   - Stack grows downward
 *   - Memory alignment (padding)
 *
 * Scenario A (3 ints)
 * 0x...bac => myAge      (4) 0x AC AD AE AF
 * 0x...ba8 => aNumber    (4) 0x A8 A9 AA AB
 * 0x...ba4 => nextNumber (4) 0x A4 A5 A6 A7
 *
 * Scenario B (1 int, 1 char*, 1 int)
 * 0x...bac => myAge      (4) 0x AC AD AE AF
 * 0x...ba8 => PADDING    (4) 0x A8 A9 AA AB (UNUSED)
 * 0x...ba0 => myName     (8) 0x A0 A1 A2 A3 A4 A5 A6 A7 (POINTER)
 * 0x...b9c => nextNumber (4) 0x 9C 9D 9E 9F
 */
int main() {
    // Scenario A
    // int myAge = 35;
    // int aNumber = 780;
    // int nextNumber = 36;

    // printf("%p\n", &myAge);
    // printf("%p\n", &aNumber);
    // printf("%p\n", &nextNumber);

    // Scenario B
    int myAge = 35;
    char* myName = "Brandon";
    int nextNumber = 36;

    printf("%p\n", &myAge);
    printf("%p\n", &myName);
    printf("%p\n", &nextNumber);


    return 0;
}
