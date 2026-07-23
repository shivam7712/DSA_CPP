#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;

    vector<int> L(n1);
    vector<int> R(n2);

    for(int i=0; i<n1; i++)
    {
        L[i] = arr[i+l];
    }
    for(int i=0; i<n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }

    int k = l;
    int i = 0;
    int j = 0;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    while(i < n1)
    {
        arr[k++] = L[i++];
    }
    while(j < n2)
    {
        arr[k++] = R[j++];
    }


}

void mergeSort(vector<int> &arr, int l, int r)
{

    if(l >= r) return;
    cout << "Divide: [" << l << " " << r << "]\n";
    int mid = (l + r) >> 1;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);
    cout << "Merge: [" << l << " " << r << "] -> ";
    for(int i=l; i<=r; i++) cout << arr[i] << " ";
    cout << "\n";
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

    mergeSort(arr, 0, n-1);

    return  0;
}
