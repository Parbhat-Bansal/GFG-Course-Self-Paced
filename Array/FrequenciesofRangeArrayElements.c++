#include <iostream>
#include <vector>
using namespace std;

vector<int> countFrequencies(vector<int>& arr, int n) {
    vector<int> freq(n, 0);

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i] - 1]++;
    }

    return freq;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> freq = countFrequencies(arr, n);

    cout << "Frequencies: ";
    for (int i = 0; i < freq.size(); i++) {
        cout << freq[i] << " ";
    }
    cout << endl ;

    return 0;
}
