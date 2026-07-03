#include <iostream>
#include <vector>
using namespace std;

void printPass(vector<int> arr, int pass, int count)
{
    cout << "Pass " << pass << ": ";
    for(int i: arr)
    {
        cout << i << " ";
    }
    cout << ", " << "swaps = " << count << "\n";
}

void bubbleSort(vector<int> &arr, int &n)
{
    int count;
    bool swapped;

    for(int i=0; i<n-1; i++)
    {

        count = 0;
        swapped = false;

        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                count++;
                swapped = true;
            }
        }

        printPass(arr, i+1, count);

        if(!swapped)
        {
            break;
        }


    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
}
