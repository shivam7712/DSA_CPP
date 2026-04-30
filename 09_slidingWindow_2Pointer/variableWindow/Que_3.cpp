#include <iostream>
#include <string>
#include <map>

using namespace std;

// Longest substring with atmost k distinct characters

int main()
{
    int n, k;
    cin >> n >> k;

    map<char, int> freq;
    string s;
    cin >> s;

    int maxLen = 0;
    int l = 0;

    for(int r=0; r<n; r++)
    {
        freq[s[r]]++;
        while(freq.size() > k) // when the window is invalid
        {
            freq[s[l]]--;
            if(freq[s[l]] == 0) freq.erase(s[l]);
            l++;
        }

        maxLen = max(maxLen, r-l+1);
    }
    cout << maxLen;
    
    
    
}