#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address a;

    strcpy(a.hostel_address, "Hostel Block A, Room 123");
    strcpy(a.city, "Pune");
    strcpy(a.state, "Maharashtra");
    strcpy(a.zip, "411001");

    printf("Present Address:\n");
    printf("Hostel Address: %s\n", a.hostel_address);
    printf("City: %s\n", a.city);
    printf("State: %s\n", a.state);
    printf("ZIP: %s\n", a.zip);

    return 0;
}
