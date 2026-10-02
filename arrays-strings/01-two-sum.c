#include <stdio.h>

void twoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: [%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No valid pair found.\n");
}

int main() {

    // Test Case 1 - Typical case
    int nums1[] = {2, 7, 11, 15};
    twoSum(nums1, 4, 9);

    // Test Case 2 - Edge case with duplicate values
    int nums2[] = {3, 3};
    twoSum(nums2, 2, 6);

    return 0;
}