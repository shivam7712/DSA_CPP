#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long ref_x, ref_y;

struct Points
{
    long long x;
    long long y;
};

long long getDistSq(long long px, long long py)
{
    long long dx = px - ref_x;
    long long dy = py - ref_y;

    return (dx * dx) + (dy * dy);
}

bool cmp(const Points &a, const Points &b)
{
    long long d1 = getDistSq(a.x, a.y);
    long long d2 = getDistSq(b.x, b.y);
    if(d1 != d2) return d1 < d2;
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
}



int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n >> ref_x >> ref_y;

    vector<Points> p(n);

    for(int i=0; i<n; i++)
    {
        cin >> p[i].x >> p[i].y;
    }

    sort(p.begin(), p.end(), cmp);

    for(const Points &i: p) cout << i.x << " " << i.y << "\n";



    return 0;
}
