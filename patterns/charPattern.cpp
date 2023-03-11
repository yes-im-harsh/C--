#include <bits/stdc++.h>
using namespace std;

// void printPattern(int n)
// {
//     // ABCDE
//     // ABCD
//     // ABC
//     // AB
//     // A
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int c = 0; c < n - i; c++)
//         {
//             char val = ch + c;
//             cout << val;
//         }
//         cout << endl;
//     }
// }

// void printPattern(int n)
// {
// // A
// // B B
// // C C C
// // D D D D
// // E E E E E
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;
//         for (int c = 0; c <= i; c++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// void printPattern(int n)
// {
// //     A
// //    ABC
// //   ABCDC
// //  ABCDEDC
// // ABCDEFEDC
//     for (int i = 0; i < n; i++)
//     {
//         // Spaces
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         // Characters
//         char ch = 'A';
//         int breakPoint = (2 * i + 1) / 2;
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << ch;
//             if(j <= breakPoint) ch++;
//             else ch--;
//         }

//         // Spaces
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void printPattern(int n)
// {
//     // E
//     // D E
//     // C D E
//     // B C D E
//     // A B C D E
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'E' - i; ch <= 'E'; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

void printPattern(int n)
{
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
    int initialSpace = 0;
    for (int i = 0; i < n ; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }

        //  stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        initialSpace += 2;
        cout << endl;
    }
    initialSpace = 8;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }

        //  stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        initialSpace -= 2;
        cout << endl;
    }
}


int main()
{
    int n;
    cin >> n;
    printPattern(n);
}