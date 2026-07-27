#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int freq[10] = {0};
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }

    for(int i=0; i<10; i++)
    {
        while(freq[10-i-1] > 0)
        {
            cout << 10-i-1;
            freq[10-i-1]--;
        }
    }






    return 0;
}
