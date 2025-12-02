#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0, max, min;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Allocate memory
    arr = (int*)malloc(n * sizeof(int));
    
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max and min
    max = min = arr[0];
    sum = arr[0];
    
    // Calculate sum, max, min
    for(int i = 1; i < n; i++) {
        sum += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    
    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %.2f\n", (float)sum / n);
    
    // Free allocated memory
    free(arr);
    
    return 0;
}