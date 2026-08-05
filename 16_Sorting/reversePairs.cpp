#include <iostream>
#include <vector>

using namespace std;

long long merge(vector<int> &arr, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    long long ans = 0;

    while(i<=mid && j<=right)
    {
        if( arr[i] <= (2LL * arr[j]) ) i++;
        else
        {
            ans+= mid - i + 1;
            j++;
        }
    }

    vector<int> temp;

    i = left;
    j = mid+1;

    while(i <= mid && j <= right)
    {
        if(arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while(i<=mid) temp.push_back(arr[i++]);
    while(j<=right) temp.push_back(arr[j++]);

    for(int &i: temp)
    {
        arr[left++] = i;
    }

    return ans;
}

long long f(vector<int> &arr, int left, int right)
{

    if(left >= right) return 0;

    int mid = left + (right - left) / 2;

    long long ans1 = f(arr, left, mid);
    long long ans2 = f(arr, mid+1, right);
    long long ans3 = merge(arr, left, mid, right);

    return ans1+ans2+ans3;
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



    return 0;
}
