#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &first, vector<int> &second, int n, int m)
{
    int i = 0;
    int j = 0;

    int idx = 0;

    int x = n + m;
    vector<int> result(x);

    while(i < n && j < m)
    {
        if(first[i] <= second[j])
        {
            result[idx++] = first[i++];
        }
        else{
            result[idx++] = second[j++];
        }
    }

    while(i < n)
    {
        result[idx++] = first[i++];
    }
    while(j < m)
    {
        result[idx++] = second[j++];
    }

    for(int val: result) cout << val << " ";

}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> first(n);
    vector<int> second(m);

    for(int i=0; i<n; i++)
    {
        cin >> first[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> second[i];
    }

    merge(first, second, n, m);





    return 0;
}
