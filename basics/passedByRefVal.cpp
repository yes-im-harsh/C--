#include<bits/stdc++.h>
using namespace std;

//NOTE: Passed by value

// void increment(int num){
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }

// int main() {
//     int num = 10;
//     increment(num);
//     cout << num << endl;
//     return 0;
// }

//NOTE: Passed by reference

// void increment(int &num){
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }

// int main() {
//     int num = 10;
//     increment(num);
//     cout << num << endl;
//     return 0;
// }

//NOTE: Passed by value
// void addTitle(string name, string title) {
//     name = "Harshu";
//     title = "Rajput";
//     cout << name << " " << title << endl;
// }

// int main() {
//     string name, title;
//     name = "Harsh";
//     cout<< "Enter your title: ";
//     cin >> title;
//     addTitle(name, title);
//     cout << name << " " << title;
//     return 0;
// }

//NOTE: Passed by value
// void addTitle(string &name, string &title) {
//     name = "Harshu";
//     title = "Rajput";
//     cout << name << " " << title << endl;
// }

// int main() {
//     string name, title;
//     name = "Harsh";
//     cout<< "Enter your title: ";
//     cin >> title;
//     addTitle(name, title);
//     cout << name << " " << title;
//     return 0;
// }

//NOTE: Arrays are by default passed by reference
void doSomething(int arr[], int n) {
    arr[3] +=5;
    cout << "Value at 3 index" << arr[3] << endl; 
}

int main () {
    int num = 5;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    doSomething(arr, num);

    for (int j = 0; j < num; j++)
    {
        cout <<"Value of " << j << "index" << arr[j] << endl;
    }
    
    return 0;
}