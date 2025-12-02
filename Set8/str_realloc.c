#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int initialSize, additionalSize;
    
    printf("Enter initial string size: ");
    scanf("%d", &initialSize);
    
    // Allocate memory for string (+1 for null terminator)
    str = (char*)malloc((initialSize + 1) * sizeof(char));
    
    if(str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter a string (max %d characters): ", initialSize);
    scanf("%s", str);
    
    printf("Initial string: %s\n", str);
    printf("Length: %lu\n", strlen(str));
    
    printf("Enter additional characters to append: ");
    scanf("%d", &additionalSize);
    
    // Reallocate memory for larger string
    str = (char*)realloc(str, (initialSize + additionalSize + 1) * sizeof(char));
    
    if(str == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    printf("Enter additional text to append: ");
    scanf("%s", str + strlen(str));
    
    printf("Final string: %s\n", str);
    printf("Final length: %lu\n", strlen(str));
    
    // Free allocated memory
    free(str);
    
    return 0;
}