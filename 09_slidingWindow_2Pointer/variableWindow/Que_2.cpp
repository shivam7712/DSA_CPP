#include <iostream>
#include <string>
#include <map>

using namespace std;

// find the longest substring with distinct characters

int main()
{
    int n;
    cin >> n;

    map<char, int> freq;
    string s;
    cin >> s;

    int ans = 0;
    int l = 0;

    for(int r=0; r<n; r++)
    {
        freq[s[r]]++;
        while(freq[s[r]] > 1)
        {
            freq[s[l]]--;
            l++;
        }

        ans = max(ans, r-l+1);
    }
    cout << ans;
    
    
    
}