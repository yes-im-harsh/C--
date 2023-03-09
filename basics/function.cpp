#include<bits/stdc++.h>
using namespace std;

int sumTwoNumbers(int a, int b) {
    int sum = a + b;
    return sum; 
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter Second number: ";
    cin >> b;
    int result = sumTwoNumbers(a,b);
    cout << "Sum of "<< a << " & " << b << " is " << result;
    return 0; 
}