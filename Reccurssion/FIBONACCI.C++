#include <iostream>
using namespace std ;

int Fib(int x)
{
    if(x <= 1)
    {
        return x;
    }

    return (Fib(x -1) + Fib(x -2));
}

int main()
{
    int x ; 
    cout << "Enter a number : ";
    cin >> x ;

    int fib = Fib(x);
    cout << fib << endl ;
    return 0 ;
}