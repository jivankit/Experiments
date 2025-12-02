#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, initialSize, newSize;
    
    printf("Enter initial array size: ");
    scanf("%d", &initialSize);
    
    // Allocate initial memory
    arr = (int*)malloc(initialSize * sizeof(int));
    
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", initialSize);
    for(int i = 0; i < initialSize; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Initial array: ");
    for(int i = 0; i < initialSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Enter new size (larger than %d): ", initialSize);
    scanf("%d", &newSize);
    
    // Reallocate memory
    arr = (int*)realloc(arr, newSize * sizeof(int));
    
    if(arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    
    printf("Enter %d additional elements:\n", newSize - initialSize);
    for(int i = initialSize; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Final array (%d elements): ", newSize);
    for(int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr);
    
    return 0;
}