#include <iostream>
#include <string>
using namespace std;

string s = "";
string ans = "";
int k = 0;


void f(int open, int close, int n)
{

    if(open == n && close == n)
    {
        k++;
        ans += s + '\n';
        return;
    }

    // open
    if(open < n)
    {
        s.push_back('(');
        f(open+1, close, n);
        s.pop_back();
    }

    // close
    if(close < open)
    {
        s.push_back(')');
        f(open, close+1, n);
        s.pop_back();
    }
}

int main()
{
   int n;
   cin >> n;

   f(0, 0, n);
   cout << k << "\n";
   cout << ans;

}
