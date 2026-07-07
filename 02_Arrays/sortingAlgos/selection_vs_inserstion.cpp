#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int inserstionSort(int &n, vector<int> v)
{
    int shifts  = 0;

    for(int i=1; i<n; i++)
    {
        int current = v[i];
        int j = i-1;

        while(j>=0 && v[j] > current)
        {
            v[j+1] = v[j];
            j--;
            shifts++;
        }
        v[j+1] = current;
    }

    return shifts;
}

int selectionSort(int &n, vector<int> v)
{
    int swaps = 0;
    for(int i=0; i<n; i++)
    {
        int minIdx = i;

        for(int j = i+1; j<n; j++)
        {
            if(v[minIdx] > v[j]) minIdx = j;
        }

        if(i != minIdx)
        {
            swap(v[minIdx], v[i]);
            swaps++;
        }
    }
    return swaps;
}

int main()
{

    int t;
    cin >> t;

    while(t--)

    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int shifts = inserstionSort(n, arr);
        int swaps = selectionSort(n, arr);

        if(swaps == shifts) cout << "Tie\n";
        else if(swaps < shifts) cout << "Selection Sort\n";
        else cout << "Insertion Sort\n";

    }




    return 0;
}
