#include <iostream>
using namespace std;

int main()
{

    int freq[101] = {0};

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i: arr)
    {
        freq[i]++;
    }

    for(int i=0; i<101; i++)
    {
        while(freq[i] > 0)
        {
            cout << i << " ";
            freq[i]--;
        }

    }

    return 0;
}
