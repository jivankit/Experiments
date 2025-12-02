#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    // Open file for reading
    file = fopen("example.txt", "r");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        printf("Make sure example.txt exists in the current directory.\n");
        return 1;
    }
    
    printf("Reading file character by character:\n");
    printf("------------------------------------\n");
    
    while((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    printf("\n------------------------------------\n");
    printf("File read successfully!\n");
    
    fclose(file);
    return 0;
}