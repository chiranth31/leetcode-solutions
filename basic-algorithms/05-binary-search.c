#include <stdio.h>

int binarySearch(int nums[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    // Test Case 1 - Target exists
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Test Case 1: Index = %d\n",
           binarySearch(nums1, 6, 9));

    // Test Case 2 - Target does not exist
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    printf("Test Case 2: Index = %d\n",
           binarySearch(nums2, 6, 2));

    // Test Case 3 - Target is the first element
    int nums3[] = {2, 5, 8, 12, 16};
    printf("Test Case 3: Index = %d\n",
           binarySearch(nums3, 5, 2));

    return 0;
}