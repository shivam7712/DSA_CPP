#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin.ignore();
    getline(cin, s);

    vector<long long> help(n);
    long long count = 0;

    for(long long i=0; i<n; i++)
    {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e')
        {
            count++;
        }
        help[i] = count;
    }

    int q;
    cin >> q;

    for(int i=1; i<=q; i++)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if(l == 0) cout << help[r] << endl;
        else cout << help[r] - help[l-1] << endl;
    }

    
    return 0;
}