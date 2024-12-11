#include<iostream>
using namespace std;

void reverse(int arr[], int n, int d) 
{
    while (n < d) 
    {
        swap(arr[n], arr[d]);
        n++;
        d--;
    }
}


void LeftRotateAnArrayByk(int arr[], int n, int d) 
{
    reverse(arr, 0, d - 1);    
    reverse(arr, d, n - 1);      
    reverse(arr, 0, n - 1);     

    
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the Size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the number of elements to rotate: ";
    cin >> d;

    LeftRotateAnArrayByk(arr, n, d);

    return 0;
}
