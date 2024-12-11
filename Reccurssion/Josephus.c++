#include <iostream>
using namespace std ;

int jos1(int n , int k)
{
    if(n == 1)
    {
        return 0 ;
    }

    return ((jos1(n-1 ,k) + k) % n );
}

int jos(int n , int k)
{
    return jos1(n , k) + 1 ;
}

int main()
{
    int n , k ;
    cout<< "Enter no. of People : " ;
    cin >> n ;
    cout << "Enter position to be killed : " ;
    cin >> k ;

    int safepos =  jos(n,k);
    cout << "The safe Position is : " << safepos << endl ;
}
