#include <iostream>
using namespace std;

int CountMax(int n) {
    int maxcount = 0;  
    int count = 0;    
    while (n > 0) {
        if ((n & 1) == 1) 
        {
            count++; 
        } 
        else 
        {
            count = 0;
        }
        if(maxcount < count)
        {
            maxcount = count ;
        }
        n = n >> 1; 
    }

    return maxcount;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int res = CountMax(x);
    cout << "Maximum consecutive 1s: " << res << endl;

    return 0;
}
