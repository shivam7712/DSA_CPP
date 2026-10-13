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


void printAllPairs(string s, int idx)
{
    int n = s.size();
    stack <int> st;

    for(int i=0; i<n; i++)
    {
        if(isOpening(s[i]))
        {
            st.push(i);
        }
        else if(isClosing(s[i]))
        {
            if(st.top()==idx)
            {
                cout << i;
                break;
            }
            st.pop();
        }
    }
}

int main()
{
    string s;
    cin >> s;
    int idx;
    cin >> idx;
    printAllPairs(s, idx);

    return 0;
}
