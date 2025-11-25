#include <stdio.h>

void testLocal() {
    int localVar = 50;
    printf("Inside function: localVar = %d\n", localVar);
}

int main() {
    testLocal();
    return 0;
}
