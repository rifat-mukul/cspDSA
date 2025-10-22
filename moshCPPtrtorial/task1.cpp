// write code to swap the value of the two veriables
#include <iostream>
using namespace std;


int main() {
    int num1 = 20;
    int num2 = 36;
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The value of num1: " << num1 << '\n';  
    cout << "The value of num2: " << num2 << '\n';  

    return 0;
}
