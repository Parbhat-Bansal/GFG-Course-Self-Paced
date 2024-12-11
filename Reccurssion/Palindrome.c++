#include <iostream>
using namespace std;
bool Palindrome(string str , int start, int end )
{
    if(start >= end)
    {
        return true ;
    }

    return(str[start] == str[end] && Palindrome(str , start + 1 , end - 1));
}
int main()
{
    string str ;
    getline(cin , str);
    int i = 0 ;
    int j = str.length() - 1;

    bool res = Palindrome(str , i , j);

    if(res)
    {
        cout << "The Sring is Palindrome" << endl ;
    }
    else{
        cout <<"The String is Not Palindrome" << endl ;
    }

}
