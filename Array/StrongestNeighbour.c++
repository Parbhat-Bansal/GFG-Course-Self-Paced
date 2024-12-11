#include<iostream>
#include<math.h>
using namespace std;
void StrongNeighbour(int arr[] , int n)
{
    int maxi = 0 ;
    for(int i = 0 ; i < n-1 ; i++)
    {
        maxi = max(arr[i] , arr[i+1]);
        cout << maxi << " " ;
    }
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
    
    StrongNeighbour(arr , n);
    
    return 0;
}