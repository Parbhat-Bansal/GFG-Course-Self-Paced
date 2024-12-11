#include <iostream>
using namespace std;

int SumOfSubsets(int arr[], int n, int sum) 
{
    if (n == 0) 
    {
        return (sum == 0) ? 1 : 0;
    }

    return SumOfSubsets(arr, n - 1, sum) + SumOfSubsets(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter sum to find in the array: ";
    cin >> sum;

    int res = SumOfSubsets(arr, n, sum);
    cout << "Number of subsets whose sum is " << sum << " is " << res << endl;

    return 0;
}
