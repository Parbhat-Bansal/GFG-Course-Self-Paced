#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void fractionTrouble(int n , int d)
{
    int num = 0 , deno = 1 ;
    for(int q = 10000 ; q >=2 ; q--)
    {
        int p = (n*q-1)/d;
        if(p*deno >= q*num)
        {
            deno = q;
            num = p ;
        }
    }
    int g = gcd(num , deno);
    cout << num/g << " " << deno/g << endl ;
}

int main()
{
    int n , d ;
    cout << "Enter Value of n and d : " ;
    cin >> n >> d ;

    fractionTrouble(n , d);
}