#include <bits/stdc++.h>
using namespace std;

void printNumberOfStars(int n)
{

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // for (int i = 0; i < n; i++)
    // {
    //     // For starting spaces
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     // For Stars
    //     for (int k = 0; k < 2 * i + 1; k++)
    //     {
    //         cout << "*";
    //     }

    //     // For spaces
    //     for (int l = 0; l < n - i - 1; l++)
    //     {
    //         cout << " ";
    //     }

    //     cout << endl;
    // }

    // *********
    //  *******
    //   *****
    //    ***
    //     *

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int k = 0; k < 2* (n - i) - 1; k++)
    //     {
    //         cout << "*";
    //     }

    //     for (int l = 0; l < i; l++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     // For starting spaces
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     // For Stars
    //     for (int k = 0; k < 2 * i + 1; k++)
    //     {
    //         cout << "*";
    //     }

    //     // For spaces
    //     for (int l = 0; l < n - i - 1; l++)
    //     {
    //         cout << " ";
    //     }

    //     cout << endl;
    // }
}

// void patternTwo(int n)
// {
//     for (int a = 0; a < n; a++)
//     {
//         for (int m = 0; m < a; m++)
//         {
//             cout << " ";
//         }

//         for (int p = 0; p < 2 * (n - a) - 1; p++)
//         {
//             cout << "*";
//         }

//         for (int o = 0; o < a; o++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void printPattern(int n)
// {
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int star = i;
//         if(i > n) star = 2*n -i;
//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void printPattern(int n)
// {

// // 1
// // 01
// // 101
// // 0101
// // 10101

//     for (int i = 0; i < n; i++)
//     {
//     int start = 1;
//         if (i % 2 == 0)
//             start = 1;
//         else
//             start = 0;

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << start;
//             start = 1 - start;
//         }
//         cout << endl;
//     }
// }

// void printPattern(int n)
// {
// // 1        1
// // 12      21
// // 123    321
// // 1234  4321
// // 1234554321
//     for (int i = 1; i <= n; i++)
//     {
//         // Number
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }

//         // Spaces
//         for (int k = 1; k <= 2 * (n - i); k++)
//         {
//             cout << " ";
//         }

//         // Number
//         for (int l = i; l >= 1; l--)
//         {
//             cout << l;
//         }

//         cout << endl;
//     }
// }

void printPattern(int n)
{

    // 1
    // 23
    // 456
    // 78910
    // 1112131415

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num += 1;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    // printNumberOfStars(n);
    // patternTwo(n);
    printPattern(n);
}