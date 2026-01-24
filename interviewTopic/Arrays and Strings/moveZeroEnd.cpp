// Move Zeros to the End
#include <bits/stdc++.h>

using namespace std;

void moveZeroesToEnd(int arr[], int n) {
    int count = 0; 
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
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
    int arr[] = {0,1,0,7};
    // int arr[] = {0,1,2,0,4,5,0,6,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZeroesToEnd(arr, n);
    printArray(arr, n);
    return 0;
}