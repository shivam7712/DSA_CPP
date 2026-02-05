#include <iostream>
using namespace std;

bool isPrime(int n) {

    if(n == 1 || n == 2) {
        return true;
    }

    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

void primeRange(int start, int end) {
    for(int i=start; i<=end; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {

    // isPrime(10) ? cout << "Prime" : cout << "Not prime";
    
    primeRange(1, 23);
    return 0;
}