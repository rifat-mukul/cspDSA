// Rotate an Array
#include <bits/stdc++.h>

using namespace std;
void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case k is greater than n
    vector<int> temp(k);

    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        arr[i] = arr[n - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the temporary array elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = arr[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =2;
    // printArray(arr, n);
    rotateArray(arr, n, k);
    printArray(arr, n);
    return 0;
}