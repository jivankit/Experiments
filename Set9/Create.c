#include <stdio.h>

int main() {
    FILE *file;
    char text[100];
    
    // Create and open file for writing
    file = fopen("example.txt", "w");
    
    if(file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    printf("Enter text to write to file (max 100 characters):\n");
    fgets(text, sizeof(text), stdin);
    
    // Write to file
    fprintf(file, "%s", text);
    
    printf("Text written to file successfully!\n");
    
    fclose(file);
    return 0;
}