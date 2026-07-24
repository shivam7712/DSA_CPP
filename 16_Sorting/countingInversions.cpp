#include <iostream>
#include <vector>
using namespace std;


long long merge(vector<int> &arr, int l, int mid, int r)
{

    int i = l;
    int j = mid + 1;

    vector<int> temp;

    long long ans = 0;

    while(i <=mid && j <= r)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            ans += mid-i+1;
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    while(j<=r)
    {
        temp.push_back(arr[j++]);
    }

    for(int i: temp)
    {
        arr[l++] = i;
    }

    return ans;
}

long long f(vector<int> &arr, int l, int r)
{
    if(l >= r) return 0;

    int mid = l + (r - l) / 2;

    // find all inversions in left half
    long long ans1 = f(arr, l, mid);

    // find all inversions in right half
    long long ans2 = f(arr, mid+1, r);

    // merge array and find remaining inversions
    long long ans3 = merge(arr, l, mid, r);

    return ans1 + ans2 + ans3;

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

    cout << f(arr, 0, n-1);

    return  0;
}
