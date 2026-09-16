#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {

    int count[26] = {0};

    if (strlen(s) != strlen(t)) {
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    // Test Case 1
    char s1[] = "anagram";
    char t1[] = "nagaram";

    if (isAnagram(s1, t1))
        printf("Test Case 1: Anagram\n");
    else
        printf("Test Case 1: Not Anagram\n");

    // Test Case 2 - Edge Case
    char s2[] = "rat";
    char t2[] = "car";

    if (isAnagram(s2, t2))
        printf("Test Case 2: Anagram\n");
    else
        printf("Test Case 2: Not Anagram\n");

    return 0;
}