#include <stdio.h>
#include <string.h>


void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char* str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

void findNextBiggerNumber(char* num) {
    int n = strlen(num);
    int i, j;

    for (i = n - 2; i >= 0; i--) {
        if (num[i] < num[i + 1]) {
            break;
        }
    }

    if (i < 0) {
        printf("Output: %s (Already the largest possible number)\n", num);
        return;
    }

    for (j = n - 1; j > i; j--) {
        if (num[j] > num[i]) {
            break;
        }
    }

    swap(&num[i], &num[j]);

    reverse(num, i + 1, n - 1);

    printf("Output: %s\n", num);
}

int main() {
    char num[20];

    printf("Enter the number: ");
    scanf("%s", num);

    findNextBiggerNumber(num);

    return 0;
}
