#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
string ConvertToBinary(int num)
{
    string str = "" ;
    while(num > 0)
    {
        if(num % 2 == 0)
        {
            str += '0';
        }

        else{
            str += '1' ;
        }

        num /= 2 ;
    }
    return str ;
}
int main()
{
    int n  ;
    cout << "Enter first number : " ;
    cin >> n ;
    int m = n & 1; 
    string str =  ConvertToBinary(m);
    reverse(str.begin(), str.end());
    cout << str << endl ;
    return 0 ;
}