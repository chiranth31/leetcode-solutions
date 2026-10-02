#include <stdio.h>

void moveZeroes(int nums[], int size) {
    int position = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[position];
            nums[position] = temp;

            position++;
        }
    }
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {

    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Test Case 1: ");
    printArray(nums1, 5);

    // Test Case 2
    int nums2[] = {0};
    moveZeroes(nums2, 1);
    printf("Test Case 2: ");
    printArray(nums2, 1);

    // Test Case 3
    int nums3[] = {1, 2, 3, 0, 0};
    moveZeroes(nums3, 5);
    printf("Test Case 3: ");
    printArray(nums3, 5);

    return 0;
}