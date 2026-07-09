#include <iostream>
#include <string>

using namespace std;

string path, res;
int operation;

void f(string s, int i)
{

    if(s.size() == i)
    {
        operation ++;
        res += path + "\n";
        return;
    }

    string sub_1 = s.substr(i, 1);
    int sd = stoi(sub_1);
    char ch_1 = sd + 'a' - 1;

    string sub_2 = s.substr(i, 2);
    int dd = stoi(sub_2);
    char ch_2 = stoi(sub_2) + 'a' - 1;

    if(sd > 0)
    {
        path.push_back(ch_1);
        f(s, i+1);
        path.pop_back();
    }
    if(dd >= 10 && dd <= 26)
    {
        path.push_back(ch_2);
        f(s, i+2);
        path.pop_back();
    }



}

int main()
{
    string s;
    cin >> s;
    f(s, 0);
    cout << operation << "\n";
    cout << res;


    return 0;
}
