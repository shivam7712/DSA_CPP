#include <iostream>
#include <vector>
using namespace std;



int main()
{


    vector <int> spf(1000000+1, 0);
    
    for(int i=2; i<=1000000; i++)
    {
        spf[i] = i;
    }

    for(int i=2; i*i<=1000000; i++)
    {
        if(spf[i] == i)
        {
            for(int j=i*i; j<=1000000; j+=i)
            {
                spf[j] = min(spf[j], i);
            }
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        bool first = true;
        while (x > 1) {
            int p = spf[x];
            int cnt = 0;

            while (x % p == 0) {
                x /= p;
                cnt++;
            }

            if (!first) cout << ' ';
            cout << p << '^' << cnt;
            first = false;
        }
        cout << '\n';
    }


   
    return 0;
}