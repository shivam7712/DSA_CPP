#include <iostream>
using namespace std;


int binToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1;

    while(n>0) {

        int ld = n%10;
        decNum += ld * pow;
        n /= 10;
        pow = pow * 2;
    }
    cout << decNum;
    return decNum;
}

int main() {

    binToDec(101);
    return 0;
}