#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n ;

    for(int i=1; i<=n; i++) {

        int zero = 0;
        int one = 1;

        for(int j=1; j<=i; j++) {
            if(i % 2 == 0) 
            {
                cout << one%2;
                one++;
            }
            else 
            {
                cout << zero%2;
                zero++;
            }
        }
        cout << endl;
    }
    return 0;
}