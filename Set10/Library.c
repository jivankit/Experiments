#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

// Function using stdarg.h for variable arguments
double average(int count, ...) {
    va_list args;
    double sum = 0;
    
    va_start(args, count);
    for(int i = 0; i < count; i++) {
        sum += va_arg(args, double);
    }
    va_end(args);
    
    return sum / count;
}

int main() {
    printf("--- Demonstration of Standard C Libraries ---\n\n");
    
    // 1. stdio.h - Already used extensively
    
    // 2. ctype.h - Character handling
    printf("1. ctype.h functions:\n");
    char ch = 'A';
    printf("   isalpha('%c'): %d\n", ch, isalpha(ch));
    printf("   isdigit('%c'): %d\n", ch, isdigit(ch));
    printf("   toupper('a'): %c\n", toupper('a'));
    printf("   tolower('B'): %c\n", tolower('B'));
    
    // 3. stdlib.h - General utilities
    printf("\n2. stdlib.h functions:\n");
    printf("   Random number: %d\n", rand() % 100);
    printf("   abs(-10): %d\n", abs(-10));
    printf("   atof(\"3.14\"): %.2f\n", atof("3.14"));
    
    // 4. assert.h - Diagnostics
    printf("\n3. assert.h function:\n");
    int x = 5;
    assert(x > 0);  // Will not trigger
    printf("   Assertion passed: x > 0\n");
    
    // 5. stdarg.h - Variable arguments (used in average function above)
    printf("\n4. stdarg.h - Variable arguments:\n");
    printf("   Average of 1.5, 2.5, 3.5, 4.5: %.2f\n", average(4, 1.5, 2.5, 3.5, 4.5));
    
    // 6. time.h - Time and date
    printf("\n5. time.h functions:\n");
    time_t current_time;
    time(&current_time);
    printf("   Current time: %s", ctime(&current_time));
    
    // 7. math.h - Mathematical functions
    printf("\n6. math.h functions:\n");
    printf("   sqrt(16): %.2f\n", sqrt(16));
    printf("   pow(2, 3): %.2f\n", pow(2, 3));
    printf("   sin(30 degrees): %.2f\n", sin(30 * M_PI / 180));
    printf("   log(10): %.2f\n", log(10));
    
    // 8. string.h - String operations
    printf("\n7. string.h functions:\n");
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    
    printf("   strlen(\"%s\"): %lu\n", str1, strlen(str1));
    strcpy(str3, str1);
    printf("   strcpy(str3, str1): %s\n", str3);
    strcat(str1, " ");
    strcat(str1, str2);
    printf("   strcat: %s\n", str1);
    printf("   strcmp(\"apple\", \"banana\"): %d\n", strcmp("apple", "banana"));
    
    // Seed random number generator with current time
    srand(time(NULL));
    printf("\nRandom number with seed: %d\n", rand() % 100);
    
    return 0;
}