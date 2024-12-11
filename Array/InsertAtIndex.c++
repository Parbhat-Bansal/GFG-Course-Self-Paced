#include <iostream>
using namespace std;
void InsertAtIndex(int arr[] , int n , int element , int index)
{
    if (index < 0 || index > n) {
        cout << "Invalid index!" << endl;
        return ;
    }

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;

    cout << "Updated array : ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl ;
    
}

int main() {
    int n, index, element;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n + 1];
 
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index where you want to insert: ";
    cin >> index;
    cout << "Enter the element to insert: ";
    cin >> element;

    InsertAtIndex(arr , n , element , index);
    return 0;
}
