#include <stdio.h>

#define MAX_ENTRIES 100 

int main() {
    char entries[MAX_ENTRIES][100]; 
    int numEntries;

    printf("How many double strings do you want to enter (max %d)? ", MAX_ENTRIES);
    scanf("%d", &numEntries);

    if (numEntries > MAX_ENTRIES || numEntries < 1) {
        printf("Please enter a valid number of entries (1 to %d).\n", MAX_ENTRIES);
        return 1; 
    }

    printf("Enter the double strings (format: \"word1 word2\"):\n");
    for (int i = 0; i < numEntries; i++) {
        printf("Entry %d: ", i + 1);
        scanf(" %[^\n]", entries[i]); 
    }

    printf("\nList of Double Strings:\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%d. %s\n", i + 1, entries[i]);
    }

    return 0;
}