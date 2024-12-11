#include<iostream>
using namespace std; 
int count = 0 ;

void TOH(int n, int a, int b, int c) {
    if (n == 1) {
        cout << "Move disk " << n << " from rod " << a << " to rod " << c << endl;
        count ++ ;
        return;
    }
    TOH(n - 1, a, c, b);
    cout << "Move disk " << n << " from rod " << a << " to rod " << c << endl;
    count ++ ;
    TOH(n - 1, b, a, c);
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    TOH(n, 1, 2, 3);     
    cout << endl << count ;
    return 0;
}
