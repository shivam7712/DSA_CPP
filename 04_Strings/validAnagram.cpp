#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s1, string s2)
{
    int count[26] = {0};

    if(s1.size() != s2.size()) return false;

    for (char ch: s1)
    {
        count[ch - 'a']++;
    }

    for (char ch: s2)
    {
        if(count[ch-'a'] == 0) return false;
        count[ch-'a']--;
    }

    return true;
}

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    bool result = isAnagram(s1, s2);
    cout << result;
    return 0;
}

// valid anagram