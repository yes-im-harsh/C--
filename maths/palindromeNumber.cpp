#include <bits/stdc++.h>
using namespace std;

void checkPalindrome(int x)
{
    if (x == 0)
        cout << "true";
    if (x < 0)
        cout << "false";
    if (x % 10 == 0)
        cout << "false";

    int sum = 0;
    while (x > sum)
    {
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    if (x == sum)
    {
        cout << "true";
    }
    else
        cout << false;
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    checkPalindrome(n);
}