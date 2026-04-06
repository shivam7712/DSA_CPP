#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        int occur = (i+1) * (n-i);
        int currSum = occur*v[i];
        sum += currSum;
    }
    cout << "Sum of all sub array: " << sum << endl;
    return 0;
}