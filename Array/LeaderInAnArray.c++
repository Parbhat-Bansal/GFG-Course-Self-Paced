#include<iostream>
using namespace std;

void Leader(int arr[] , int n)
{
        for(int i = 0 ; i < n ; i++)
        {
            bool flag = false ;
            for(int j = i+1 ; j < n ; j++)
            {
                if(arr[i] <= arr[j])
                {
                    flag = true ;
                    break ;
                }
            }

            if(flag == false)
            {
                cout << arr[i] << " " ;
            }
        }
        cout << endl ;
}

void Leader1(int arr[] , int n)
{
    int leader = arr[n-1] ;
    cout << leader << " " ;
    for(int i = n-2 ; i >= 0 ; i--)
    {
        if(leader < arr[i])
        {
            leader = arr[i] ;
            cout << leader <<" ";
        }
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
    
    Leader(arr , n);
    //Efficient Solution Leader 1 
    Leader1(arr , n);
    
    return 0;
}