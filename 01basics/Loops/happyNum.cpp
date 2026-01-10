#include <iostream>
#include <unordered_set>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    while (n>0) {
        int ld = n%10;
        sum += ld*ld;
        n/=10;
    }
    return sum;
}

bool isHappy(int n) {

    unordered_set<int> seen;

    while(n!=1) {
        if(seen.find(n) != seen.end()){
            return false;
        }
       
        seen.insert(n);
        n = sumOfSquares(n);
        
    }
    
    return true;

}

int main() {
    int num;
    cin >> num;
    if(isHappy(num)) {
        cout << "Happy Num";
    }
    else {
        cout << "Not a happy num";
    }
    return 0;
    
}