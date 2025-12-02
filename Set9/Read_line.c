#include <stdio.h>

int main() {
    FILE *file;
    char line[200];
    int lineNumber = 1;
    
    // Open file for reading
    file = fopen("example.txt", "r");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        printf("Make sure example.txt exists in the current directory.\n");
        return 1;
    }
    
    printf("Reading file line by line:\n");
    printf("--------------------------\n");
    
    while(fgets(line, sizeof(line), file) != NULL) {
        printf("Line %d: %s", lineNumber, line);
        lineNumber++;
    }
    
    printf("--------------------------\n");
    printf("Total lines read: %d\n", lineNumber - 1);
    
    fclose(file);
    return 0;
}