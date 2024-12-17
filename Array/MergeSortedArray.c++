#include <bits/stdc++.h>
using namespace std;

void MergeSortedArray(int a[], int b[], int n, int m) {
    int i = 0, j = 0 , k = 0 ;
    int nln = 0 ;
    int z = m + n ;
    int res[z] ;

    while (i < n && j < m) 
    {
        if (a[i] < b[j]) 
        {
            cout << a[i] << " " ;
            i++;
            nln++ ;
            // res[k] = a[i] ;
            // k++;
        } 

        else if (a[i] > b[j]) 
        {
            cout << b[j] << " " ;
            j++;
            nln++;
            // res[k] = b[j] ;
            // k++;
        }

        else 
        { 
            cout << a[i] << " " ;
            i++;
            nln++;
            // res[k] = a[i] ;
            // k++;
        }


        if(nln == n)
        {
            cout << endl ;
        }
    }
    
    while (i < n) 
    {
        cout << a[i] << " " ;
        i++;
        // res[k] = a[i] ;
        // k++ ;
    }

    while (j < m) 
    {
        cout << b[j] << " " ;
        j++;
        // res[k] = b[j] ;
        // k++;
    }

    // for(int r = 0 ; r < z ; r++)
    // {
    //     cout << res[r] << " " ;
    // }
    

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array1: ";
    cin >> n;
    int m;
    cout << "Enter the size of array2: ";
    cin >> m;

    int a[n];
    cout << "Enter elements in the array1 (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[m];
    cout << "Enter elements in the array2 (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // cout << "Merged array: ";
    MergeSortedArray(a, b, n, m);

    return 0;
}
