#include <bits/stdc++.h>

using namespace std;

void findMaxMin(int arr[], int n) {
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];    
        }
        
    }
    cout << "Maximum: " << maxVal<<"\nMinmum: " << minVal <<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMaxMin(arr, n);
    return 0;
}