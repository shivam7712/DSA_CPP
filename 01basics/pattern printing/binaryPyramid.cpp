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
                cout << one;
                if(one == 1) {
                    one = 0;
                }
                else {
                    one = 1;
                }
            }
            else 
            {
                cout << zero;
                if(zero == 0) {
                    zero = 1;
                }
                else {
                    zero = 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}