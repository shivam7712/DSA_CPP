#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Student {
    string name;
    int total, phy, chem, math;
};

bool cmp(const Student &a, const Student &b)
{
    if(a.total != b.total) return a.total > b.total;
    if(a.math != b.math) return a.math > b.math;
    if(a.phy != b.phy) return a.phy > b.phy;

    return a.name < b.name;
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<Student> s(n);

    for(int i=0; i<n; i++)
    {
        cin >> s[i].name >> s[i].total >> s[i].phy >> s[i].chem >> s[i].math;
    }

    sort(s.begin(), s.end(), cmp);

    for(const Student &st: s) cout << st.name << " " << st.total << " " << st.phy << " " <<st.chem << " " << st.math<<"\n";

    return 0;
}
