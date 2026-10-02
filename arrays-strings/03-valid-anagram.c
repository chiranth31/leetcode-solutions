#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    int count[26] = {0};

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        return 0;
    }

    for (int i = 0; i < lenS; i++) {
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

    // Test Case 1 - Valid anagram
    char s1[] = "anagram";
    char t1[] = "nagaram";

    if (isAnagram(s1, t1)) {
        printf("Test Case 1: True\n");
    } else {
        printf("Test Case 1: False\n");
    }

    // Test Case 2 - Not an anagram
    char s2[] = "rat";
    char t2[] = "car";

    if (isAnagram(s2, t2)) {
        printf("Test Case 2: True\n");
    } else {
        printf("Test Case 2: False\n");
    }

    // Test Case 3 - Same single character
    char s3[] = "a";
    char t3[] = "a";

    if (isAnagram(s3, t3)) {
        printf("Test Case 3: True\n");
    } else {
        printf("Test Case 3: False\n");
    }

    return 0;
}