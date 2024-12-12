#include<iostream>
using namespace std;
int SlidingWindowTechnique(int arr[] , int n , int k)
{
    int curr  = 0 ;
    for(int i = 0 ; i < k ; i++)
    {
        curr += arr[i] ;
    }

    int res = curr ;
    for(int i = k ; i < n ; i++)
    {
        curr = curr + arr[i] - arr[i-k];
        res = max(res , curr);
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

    int k ;
    cout << "Enter value of k : " ;\
    cin >> k;

    int res = SlidingWindowTechnique(arr , n , k) ;
    cout << res << " " << endl ;
    
    return 0;
}