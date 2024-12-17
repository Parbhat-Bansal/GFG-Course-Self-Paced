#include<bits/stdc++.h>
using namespace std;

void SumByusingTwoPointerApproach(int arr[] , int n , int sum)
{
    int i = 0 , j = n-1 ;
    bool res = false ;
    while(i < j)
    {
        // int mid = i + (j - i)/2;
        if(arr[i] + arr[j] == sum)
        {
            res = true ;
            cout << i << " " << j << endl ;
            break ;
        }

        else if(arr[i] + arr[j] > sum)
        {
            j-- ;
        }

        else if(arr[i] + arr[j] < sum)
        {
            i++ ;
        }
    }

    if(res == false)
    {
        cout << "No Pair Found !! " << endl ;
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

    int sum ;
    cout << "Enter sum to be find in the array : ";
    cin >> sum ;

    SumByusingTwoPointerApproach(arr , n , sum);
    
    
    return 0;
}