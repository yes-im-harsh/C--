#include <bits/stdc++.h>
using namespace std;

// Number =123

int reverseDigit(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    cout << revNum;
}

int main()
{
    int n;
    cin >> n;
    int ans = reverseDigit(n);
    return ans;
}