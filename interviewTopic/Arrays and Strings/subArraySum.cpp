// Subarray Sum (Kadane's Algorithm for Maximum Subarray Sum)

#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum contiguous subarray sum is " << maxSubArraySum(arr, n) << "\n";
    return 0;
}