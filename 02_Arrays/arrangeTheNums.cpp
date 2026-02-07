#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n];

        int s = 0;
        int e = n-1;

        int odd = 1;
        int even = 2;

        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)
            {
                arr[s] = odd;
                odd += 2;
                s++;
            }

            else
            {
                arr[e] = even;
                even += 2;
                e--;
            }
        }

        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        

        
    }

    return 0;
}


/* 

input: 

3
6
7
8

output:

1 3 5 6 4 2 
1 3 5 7 6 4 2 
1 3 5 7 8 6 4 2 

*/