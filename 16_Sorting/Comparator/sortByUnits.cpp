#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    if(abs(a%10) < abs(b%10)) return true;
    if(abs(a%10) == abs(b%10))
    {
        return a < b;
    }
    return false;
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

    sort(arr.begin(), arr.end(), cmp);

    for(int i: arr) cout << i << " ";

    return 0;
}
