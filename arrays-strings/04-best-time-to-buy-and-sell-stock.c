#include <stdio.h>

int maxProfit(int prices[], int size) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++) {
        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfit;
}

int main() {

    // Test Case 1 - Profit is possible
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test Case 1: Maximum Profit = %d\n",
           maxProfit(prices1, 6));

    // Test Case 2 - No profit is possible
    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test Case 2: Maximum Profit = %d\n",
           maxProfit(prices2, 5));

    // Test Case 3 - Single day
    int prices3[] = {5};
    printf("Test Case 3: Maximum Profit = %d\n",
           maxProfit(prices3, 1));

    return 0;
}