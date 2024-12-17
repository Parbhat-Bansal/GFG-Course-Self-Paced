#include<bits/stdc++.h>
using namespace std;

int SquareRootUsingbinarySearch(int n)
{
    int low = 1 , high = n-1 , ans = -1;

    while(low<=high)
    {
        int mid = low + (high -low)/2 ;
        int mysqr = mid * mid ;

        if(mysqr == n)
        {
            return mid ;
        }

        else if(mysqr > n)
        {
            high = mid -1 ;
        }

        else{
            low = mid + 1;
            ans = mid ;
        }
    }

    return ans ;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    int res = SquareRootUsingbinarySearch(n);
    cout << res << " " << endl ;
    
    
    return 0;
}