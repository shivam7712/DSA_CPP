#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if(i == 1 || j == 1 || i==j) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int i=n-1; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            if(i == 1 || j == 1 || i==j) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}