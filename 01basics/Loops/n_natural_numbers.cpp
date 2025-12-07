#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: " << endl;
    cin >> n;
    
    int num = n;  // copy
    int sum = 0;

    while (n > 0) {
        sum += n;
        n--;
    }

    cout << "sum: " << sum << endl;

    cout << "sum optimised: " << num*(num+1)/2 << endl;

    return 0;
}