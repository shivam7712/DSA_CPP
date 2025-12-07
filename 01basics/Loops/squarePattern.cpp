#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter a number to print square: ";
    cin >> n;

    for (int i=1; i<=n; i++) {
        for (int i=1; i<=n; i++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}