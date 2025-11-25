#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Values of variables: %d, %.2f, %c\n", a, b, c);
    printf("Values via pointers: %d, %.2f, %c\n", *p1, *p2, *p3);
    printf("Pointer addresses: %p, %p, %p\n", (void*)p1, (void*)p2, (void*)p3);
    return 0;
}
