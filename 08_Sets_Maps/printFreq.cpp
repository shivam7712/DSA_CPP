#include <iostream>
#include <vector>

using namespace std;


void printFreq(vector<int> v)
{
    int n = v.size();

    for(int i=0; i<n; i++)
    {
        if(v[i] == -1) continue;

        int count = 1;
        for(int j=i+1; j<n; j++)
        {
            if(v[i]==v[j]){
                count ++;
                v[j] = -1;
            }
             
        }
        cout << v[i] << " : " << count << endl;
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