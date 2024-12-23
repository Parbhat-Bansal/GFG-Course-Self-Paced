#include <bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        arr[i] += (arr[arr[i]] % n) * n;
    }

    for (int i = 0; i < n; i++) 
    {
        arr[i] /= n;
    }
}

int main() 
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    arrange(arr, n);

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}