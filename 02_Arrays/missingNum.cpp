#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        

        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int idx = -1;

        for(int i=0; i<n; i++)
        {
            int isDuplicate = false;

            for(int j=0; j<n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if(arr[i] == arr[j]) {
                    isDuplicate = true;
                    break;
                }
            }
            if(!isDuplicate)
            {
                cout << arr[i] << endl;
            }
        }


    }

    return 0;
}