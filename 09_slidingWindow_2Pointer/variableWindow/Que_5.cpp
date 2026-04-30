#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//Count Subarrays with At Most K Distinct

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    unordered_map<long long, long long> freq;
    long long count = 0;
    int l = 0;

    for(int r=0; r<n; r++)
    {
        freq[A[r]]++;
        while(freq.size() > k)
        {
            freq[A[l]]--;
            if(freq[A[l]] == 0) freq.erase(A[l]);
            l++;
        }
        count += r-l+1;

    }

    cout << count;
    
    
    
}