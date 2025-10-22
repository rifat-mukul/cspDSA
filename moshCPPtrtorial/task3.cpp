#include<iostream>

using namespace std;

int main() {
    double f;
    cout << "Enter the fahrenheit : ";
    cin >> f;
    double c = (5.0/9.0) * (f - 32);
    cout << "the temperature in celsius is : " << c <<endl;
    return 0;
}