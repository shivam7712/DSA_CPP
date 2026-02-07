#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        

        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int s = 1;

        while(s <= n-1) {
            swap(arr[s], arr[s-1]);
            s+=2;
        }

        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}