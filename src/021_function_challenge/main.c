#include <stdio.h>

// Jumping ahead here...
#define ARRAY_LENGTH(x) (sizeof(x) / sizeof((x)[0]))

int sum(int x[], int size);

int main() {
    int obs[] = { 3, 4, 5, 1 };
    // int arr_len = sizeof(obs) / sizeof(obs[0]);
    int arr_len = ARRAY_LENGTH(obs);

    int res = sum(obs, arr_len);

    printf("sum() res: %d\n", res);
    return 0;
}

int sum(int x[], int size) {
    int res = 0;
    for (int i = 0; i < size; i++) {
        res += x[i];
    }

    return res;
}


