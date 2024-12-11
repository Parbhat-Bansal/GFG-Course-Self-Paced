#include<iostream>
#include<algorithm>
using namespace std; 

void Permute(string s , int i )
{
    if(i == s.length() -1)
    {
        cout << s << " ";
        return ;
    }
    for(int j = i ; j < s.length() ; j++)
    {
        swap(s[i] , s[j]);
        Permute(s , i+1);
        swap(s[j] , s[i]);

    }
}

int main()
{
    string s ;
    cout<< "Enter a string : " ;
    getline(cin ,s);
    int i = 0 ;
    Permute(s , i);
    return 0 ;

}
