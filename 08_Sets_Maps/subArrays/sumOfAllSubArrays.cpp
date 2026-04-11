#include <iostream>
#include <vector>

using namespace std;


void printFreq(vector<int> v)
{
    int n = v.size();
    vector<int> pre(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += v[i];
        pre[i] = sum;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(i == 0) cout << pre[j] << endl;
            else cout << pre[j] - pre[i-1] << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    printFreq(v);
    return 0;
}