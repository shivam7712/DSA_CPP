#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Student {
    string name;
    int score;
};

bool cmp(const Student &a, const Student &b)
{
    if(a.score > b.score) return true;
    if(a.score == b.score) return a.name < b.name;
    return false;
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
        cin >> s[i].name >> s[i].score;
    }

    sort(s.begin(), s.end(), cmp);

    for(Student &st: s) cout << st.name << " " << st.score << "\n";

    return 0;
}
