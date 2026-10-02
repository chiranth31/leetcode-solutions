#include <stdio.h>

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1
    char str1[] = "hello";
    reverseString(str1, 5);
    printf("Reversed string: %s\n", str1);

    // Test Case 2
    char str2[] = "Hannah";
    reverseString(str2, 6);
    printf("Reversed string: %s\n", str2);

    return 0;
}