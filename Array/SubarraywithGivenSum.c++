#include<iostream>
using namespace std;

bool SubarraywithGivenSum(int arr[] , int n , int sum)
{
    int s = 0 , curr = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        curr += arr[i];

        while(sum < curr)
        {
            curr -= arr[s] ;
            s++ ;
        }

        if(curr == sum)
        {
            return true ;
        }
    }

    return false ;
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
    
    int sum ;
    cout << "Enter the sum to find in the array : ";
    cin >> sum ;

    bool res = SubarraywithGivenSum(arr , n , sum);
    cout << res << " " << endl ;
    
    return 0;
}