#include <iostream>
using namespace std;
 
int decToBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 1;

    while(n > 0) {
        int rem = n%2;
        cout << rem << endl;
        binNum += pow * rem;
        pow *= 10;
        n /= 2;
    }

    return binNum;
}

int main() {

    cout << decToBin(8);
    return 0;
}