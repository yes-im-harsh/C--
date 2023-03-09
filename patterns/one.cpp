#include <bits/stdc++.h>
using namespace std;

void patterns(int n)
{

    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    //  for (int i = 0; i < n; i++)
    //  {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    //  }

    //  for (int i = 0; i < n; i++)
    //  {
    //     for (int j = 0; j <= i ; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    //  }

    // 1
    // 12
    // 123
    // 1234
    // 12345

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // 1
    // 22
    // 333
    // 4444
    // 55555

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

// 12345
// 1234
// 123
// 12
// 1

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
}

int main()
{
    int n;
    cin >> n;
    patterns(n);
}