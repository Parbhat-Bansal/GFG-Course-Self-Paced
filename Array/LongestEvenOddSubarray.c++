#include<iostream>
using namespace std;

int LongestEvenOddSubarray(int arr[], int n)
{
    int res = 1 ;
    int curr =1 ;

    for(int i = 1 ; i < n ; i++)
    {
        if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0) || (arr[i-1] % 2 == 0 && arr[i] % 2 != 0))
        {
            curr ++ ;
            res = max(res , curr);
        }
        else{
            curr = 1 ;
        }
    }

    return res ;
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
    
    int res = LongestEvenOddSubarray(arr , n);
    cout << res << " " << endl ;
    
    return 0;
}