#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<int, string> mp;
string path;
string res;
int c = 0;

void f(string s, int i)
{

    if(i == s.size())
    {
        c++;
        res += path + "\n";
        return;
    }

    int digit = s[i] - 48;
    string choice = mp[digit];

    for(char ch : choice)
    {
        path.push_back(ch);
        f(s, i+1);
        path.pop_back();
    }
}

int main()
{
    string s;
    cin >> s;

    mp[2] = "abc";
    mp[3] = "def";
    mp[4] = "ghi";
    mp[5] = "jkl";
    mp[6] = "mno";
    mp[7] = "pqrs";
    mp[8] = "tuv";
    mp[9] = "wxyz";

    f(s, 0);

    cout << c << "\n";
    cout << res;

    return 0;
}
