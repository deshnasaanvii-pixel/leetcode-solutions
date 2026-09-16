#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {

    // Test Case 1
    char str1[] = "hello";
    reverseString(str1);
    printf("Test Case 1: %s\n", str1);

    // Test Case 2 - Edge Case
    char str2[] = "a";
    reverseString(str2);
    printf("Test Case 2: %s\n", str2);

    return 0;
}