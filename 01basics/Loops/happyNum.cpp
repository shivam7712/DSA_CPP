#include <iostream>
#include <unordered_set> 
using namespace std;

unordered_set<int> Set;


int isHappy(int n) {

    int sum = 0;

    while(n > 0) {
        int ld = n%10;
        sum += ld*ld;
        n/=10;
    }
    if(Set.find(sum) == Set.end()) {
        Set.insert(sum);
    }
    else {
        return -2;
    }
    
    if (sum == 1) return -1;
    return sum;
}

int main() {

    int n;
    cin >> n;

    int res = isHappy(n);

    while(1) {
        
        if(res == -2) {
            cout << "Gand mara";
            break;
        }
        if(res == -1) {
            cout << "yes";
            break;
            
        }
        else {
            res = isHappy(res);
        }
    }
    
    
}