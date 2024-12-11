#include <iostream>
using namespace std ;

long long Fact(int x )
{
    if(x == 0)
    {
        return 1;
    }

    return x * Fact(x -1);
}

int main()
{
    int x ; 
    cout << "Enter a number : ";
    cin >> x ;

    long long fact = Fact(x);
    cout << fact << endl ;

}