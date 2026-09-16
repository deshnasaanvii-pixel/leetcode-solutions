#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int n, char result[]) {

    int index = 0;

    while (strs[0][index] != '\0') {

        char current = strs[0][index];

        for (int i = 1; i < n; i++) {

            if (strs[i][index] != current ||
                strs[i][index] == '\0') {

                result[index] = '\0';
                return;
            }
        }

        result[index] = current;
        index++;
    }

    result[index] = '\0';
}

int main() {

    // Test Case 1
    char strs1[][100] = {"flower", "flow", "flight"};
    char result1[100];

    longestCommonPrefix(strs1, 3, result1);
    printf("Test Case 1: %s\n", result1);

    // Test Case 2 - Edge Case
    char strs2[][100] = {"dog", "racecar", "car"};
    char result2[100];

    longestCommonPrefix(strs2, 3, result2);
    printf("Test Case 2: %s\n", result2);

    return 0;
}