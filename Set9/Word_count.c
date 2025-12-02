#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch, prevCh = ' ';
    int wordCount = 0, charCount = 0, lineCount = 1;
    
    // Open file for reading
    file = fopen("example.txt", "r");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        printf("Make sure example.txt exists in the current directory.\n");
        return 1;
    }
    
    printf("Counting words, characters, and lines...\n");
    
    while((ch = fgetc(file)) != EOF) {
        charCount++;
        
        // Count words: word starts when previous char is space and current is not space
        if(isspace(prevCh) && !isspace(ch)) {
            wordCount++;
        }
        
        // Count lines
        if(ch == '\n') {
            lineCount++;
        }
        
        prevCh = ch;
    }
    
    // If file ends without newline, count last word
    if(!isspace(prevCh) && prevCh != EOF) {
        wordCount++;
    }
    
    printf("\nFile Statistics:\n");
    printf("Words: %d\n", wordCount);
    printf("Characters: %d\n", charCount);
    printf("Lines: %d\n", lineCount);
    
    fclose(file);
    return 0;
}