#include <stdio.h>

#define MAX_PRESIDENTS 5

struct President {
    char firstName[50];
    char lastName[50];
};

int main() {
    struct President presidents[MAX_PRESIDENTS];

    printf("Enter the names of %d Presidents of India:\n", MAX_PRESIDENTS);
    for (int i = 0; i < MAX_PRESIDENTS; i++) {
        printf("President %d:\n", i + 1);
        printf("First Name: ");
        scanf("%s", presidents[i].firstName);
        printf("Last Name: ");
        scanf("%s", presidents[i].lastName);
    }

    printf("\nList of Presidents of India:\n");
    printf("\n First name \t Last name.");
    printf("\n------------------------\n");
    for (int i = 0; i < MAX_PRESIDENTS; i++) {
        printf("%d. %s \t %s\n", i + 1, presidents[i].firstName, presidents[i].lastName);
    }

    return 0;
}