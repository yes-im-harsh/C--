#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int min_idx, i, j;

    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }

            if (min_idx != i)
                swap(&arr[min_idx], &arr[i]);
        }
    }
}

void printArray(int arr[], int size){
    int i;
    for (int i = 0; i < size; i++)
    {
        //Print the element separated by space
        cout<< arr[i] << " ";
        // cout << endl;
    }
}

int main(){
    int arr[] = {87, 32, 109, 66, 0, 17, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
