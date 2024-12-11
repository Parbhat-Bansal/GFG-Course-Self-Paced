#include<iostream>
using namespace std;

int main() 
{
    int x;
    cout << "Enter size of an array: ";
    cin >> x;
    int arr[x];
    cout << "Enter Elements in the array: ";
    for (int i = 0; i < x; i++) 
    {
        cin >> arr[i];
    }

    int k ;
    cout << "Enter a number for reverse array : " ;
    cin >> k ;
    int start = 0;
    int end = k - 1;

    
    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    int arr1[k];   
    int arr2[x - k]; 
    int res[x];   
    
    for (int i = 0; i < k; i++) 
    {
        arr1[i] = arr[i];
    }

    for (int i = k; i < x; i++) 
    {
        arr2[i - k] = arr[i];
    }

    int j = 0;
    for (int i = 0; i < k; i++)
    {
        res[j] = arr1[i];
        j++;
    }

    for (int i = 0; i < x - k; i++) 
    {
        res[j] = arr2[i];
        j++;
    }



    for (int i = 0; i < x; i++) 
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
