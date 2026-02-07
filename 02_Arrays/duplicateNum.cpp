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

        int flag = false;
        int num = 0;

        for(int i=0; i<n; i++)
        {
            
            for(int j=0; j<n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if(arr[i]==arr[j])
                {
                    num = arr[i];
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        
        }

        cout << num << endl;


    }

    return 0;
}