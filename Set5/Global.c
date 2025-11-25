#include <stdio.h>

int globalVar = 100; 

void displayGlobal() {
    printf("Inside function: globalVar = %d\n", globalVar);
}

int main() {
    printf("In main: globalVar = %d\n", globalVar);
    displayGlobal();
