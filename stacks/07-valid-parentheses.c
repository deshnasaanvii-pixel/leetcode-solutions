#include <stdio.h>
#include <string.h>

int isValid(char s[]) {

    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        }
        else {

            if (top == -1) {
                return 0;
            }

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {

    // Test Case 1
    char s1[] = "()[]{}";

    if (isValid(s1))
        printf("Test Case 1: Valid\n");
    else
        printf("Test Case 1: Invalid\n");

    // Test Case 2 - Edge Case
    char s2[] = "(]";

    if (isValid(s2))
        printf("Test Case 2: Valid\n");
    else
        printf("Test Case 2: Invalid\n");

    return 0;
}