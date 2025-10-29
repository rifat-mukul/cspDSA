#include <iostream>

using namespace std;

int main() {
    int marks[5] = {10,25,58,65,87};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    int arr_length = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < arr_length; i++)
    {
        cout << marks[i] << endl;
    }
    
    
    return 0;
}