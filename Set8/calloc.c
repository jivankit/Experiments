#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Allocate and initialize to zero using calloc
    arr = (int*)calloc(n, sizeof(int));
    
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Array after calloc (initialized to zero):\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Enter %d new values:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Updated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr);
    
    return 0;
}