#include <iostream>
#include <vector>

using namespace std;

// sort the 0 and 1

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<int> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    int countZero = 0;
    int countOne = 0;

    for(int i=0; i<n; i++)
    {
        if(A[i] == 0) countZero++;
        else countOne++;
    }

    int i = 0;

    while(countZero > 0)
    {
        A[i++] = 0;
        countZero--;
    }
    while(countOne > 0)
    {
        A[i++] = 1;
        countOne--;
    }

    for(int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    
}