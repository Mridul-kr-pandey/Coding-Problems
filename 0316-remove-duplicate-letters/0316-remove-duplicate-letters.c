#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* removeDuplicateLetters(char* s) {
    int len = strlen(s);
    int last[26];          // Last occurrence of each character
    bool seen[26] = {0};   // Whether a character is in the current result
    char* stack = (char*)malloc(len + 1);  // Stack to build the result
    int top = -1;          // Stack pointer

    // Record last occurrence of each character
    for (int i = 0; i < len; ++i) {
        last[s[i] - 'a'] = i;
    }

    for (int i = 0; i < len; ++i) {
        char c = s[i];
        int idx = c - 'a';
        if (seen[idx]) continue;

        while (top >= 0 && c < stack[top] && i < last[stack[top] - 'a']) {
            seen[stack[top] - 'a'] = false;
            top--;
        }

        stack[++top] = c;
        seen[idx] = true;
    }

    stack[top + 1] = '\0'; // Null-terminate the result string
    return stack;
}
