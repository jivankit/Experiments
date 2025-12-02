#include <stdio.h>

// Define macros for arithmetic operations
#define ADD(x, y) ((x) + (y))
#define SUBTRACT(x, y) ((x) - (y))
#define MULTIPLY(x, y) ((x) * (y))
#define DIVIDE(x, y) ((y) != 0 ? (x) / (y) : 0)
#define MODULUS(x, y) ((y) != 0 ? (x) % (y) : 0)
#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main() {
    int a = 10, b = 5;
    float c = 12.5, d = 2.5;
    
    printf("--- Arithmetic Operations using Macros ---\n\n");
    
    printf("Integer operations (a = %d, b = %d):\n", a, b);
    printf("ADD: %d + %d = %d\n", a, b, ADD(a, b));
    printf("SUBTRACT: %d - %d = %d\n", a, b, SUBTRACT(a, b));
    printf("MULTIPLY: %d * %d = %d\n", a, b, MULTIPLY(a, b));
    printf("DIVIDE: %d / %d = %d\n", a, b, DIVIDE(a, b));
    printf("MODULUS: %d %% %d = %d\n", a, b, MODULUS(a, b));
    printf("SQUARE(%d) = %d\n", a, SQUARE(a));
    printf("CUBE(%d) = %d\n", b, CUBE(b));
    printf("MAX(%d, %d) = %d\n", a, b, MAX(a, b));
    printf("MIN(%d, %d) = %d\n", a, b, MIN(a, b));
    
    printf("\nFloat operations (c = %.2f, d = %.2f):\n", c, d);
    printf("ADD: %.2f + %.2f = %.2f\n", c, d, ADD(c, d));
    printf("SUBTRACT: %.2f - %.2f = %.2f\n", c, d, SUBTRACT(c, d));
    printf("MULTIPLY: %.2f * %.2f = %.2f\n", c, d, MULTIPLY(c, d));
    printf("DIVIDE: %.2f / %.2f = %.2f\n", c, d, DIVIDE(c, d));
    
    return 0;
}