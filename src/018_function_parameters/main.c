#include <stdio.h>

void myFunction(char name[]) {
    printf("Hello %s\n", name);
}

int main() {
    myFunction("Brandon");
    myFunction("Ryan");
    myFunction("Merritt");
    return 0;
}
