#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isOpening(char ch)
{
    if(ch=='(') return true;
    return false;
}
bool isClosing(char ch)
{
    if(ch==')') return true;
    return false;
}
int max(int a, int b)
{
    return a<b ? b : a;
}


int findMaxDepth(string s)
{
    stack <int> st;
    int maxDepth = 0;
    for(char ch: s)
    {
        if(isOpening(ch)) st.push(ch);
        else if(isClosing(ch))
        {
            maxDepth=max(st.size(), maxDepth);
            st.pop();
        }
    }
    return maxDepth;
}

int main()
{
    string s;
    cin >> s;
    cout << findMaxDepth(s);

    return 0;
}
