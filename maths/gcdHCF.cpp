// Bruteforce Approach
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int ans;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

// Euclidean's approach

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    if (a == 0)
        return b;
    else
        return a;
}
