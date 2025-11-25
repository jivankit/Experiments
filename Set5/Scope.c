#include <stdio.h>

int main() {
    int x = 10;
    printf("Outside block: x = %d\n", x);

    {
        int y = 20;  
        printf("Inside block: x = %d, y = %d\n", x, y);
    }

    return 0;
}
