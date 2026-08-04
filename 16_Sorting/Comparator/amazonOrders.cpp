#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct order {
    int id;
    int timeStamp;
    int priority;
};

bool cmp(order &a, order &b)
{
    if(a.priority != b.priority) return a.priority > b.priority;
    if(a.timeStamp != b.timeStamp) return a.timeStamp < b.timeStamp;
    return a.id < b.id;
}



int main()
{

    int n;
    cin >> n;

    vector<order> o(n);

    for(int i=0; i<n; i++)
    {
        cin >> o[i].id >> o[i].timeStamp >> o[i].priority;
    }

    sort(o.begin(), o.end(), cmp);

    for(order i: o) cout << i.id << " " << i.timeStamp << " " << i.priority << "\n";

    return 0;
}
