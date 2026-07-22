#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{

    int i = l;
    int j = mid + 1;
    int idx = 0;

    int x = r - l + 1;
    vector<int> result(x);

    while(i < mid+1 && j < r+1)
    {
        if(arr[i] <= arr[j])
        {
            result[idx++] = arr[i++];
        }
        else{
            result[idx++] = arr[j++];
        }
    }

    while(i < mid+1)
    {
        result[idx++] = arr[i++];
    }
    while(j < r+1)
    {
        result[idx++] = arr[j++];
    }

    for(int i=0; i<x; i++)
    {
        arr[l++] = result[i];
    }

}

void mergeSort(vector<int> &arr, int l, int r)
{

    if(l == r) return;
    int mid = (l+r) >> 1;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, mid, r);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    for(int i: arr) cout << i << " ";

    return 0;
}
