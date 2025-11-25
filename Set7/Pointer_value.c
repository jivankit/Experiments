#include <stdio.h>

void modify(int *x, float *y, char *z) {
    *x += 5;
    *y *= 2;
    *z = 'Z';
}

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';

    printf("Before modification: %d, %.2f, %c\n", a, b, c);
    modify(&a, &b, &c);
    printf("After modification: %d, %.2f, %c\n", a, b, c);

    return 0;
}
