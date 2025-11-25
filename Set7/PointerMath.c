#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Original addresses: %p, %p, %p\n", (void*)p1, (void*)p2, (void*)p3);

    p1++;  // increment int pointer
    p2++;  // increment float pointer
    p3++;  // increment char pointer

    printf("After increment: %p, %p, %p\n", (void*)p1, (void*)p2, (void*)p3);

    p1--;  // decrement int pointer
    p2--;  // decrement float pointer
    p3--;  // decrement char pointer

    printf("After decrement: %p, %p, %p\n", (void*)p1, (void*)p2, (void*)p3);

    printf("Values via pointers: %d, %.2f, %c\n", *p1, *p2, *p3);
    return 0;
}
