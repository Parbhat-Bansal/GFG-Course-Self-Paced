#include<iostream>
using namespace std;

int MaxProfit(int price[] , int n)
{
    int profit = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        if(price[i] > price[i-1])
        {
            profit += price[i] - price[i-1];
        }
    }

    return profit ;
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

    int profit = MaxProfit(arr , n);

    cout << "Max Profit is " << profit << endl ;
    
    
    return 0;
}