#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct order {
    int flightNo;
    int departureTime;
    string destination;
};

bool cmp(order &a, order &b)
{
    if(a.departureTime != b.departureTime) return a.departureTime < b.departureTime;
    return a.flightNo < b.flightNo;
}



int main()
{

    int n;
    cin >> n;

    vector<order> o(n);

    for(int i=0; i<n; i++)
    {
        cin >> o[i].flightNo >> o[i].departureTime >> o[i].destination;
    }

    sort(o.begin(), o.end(), cmp);

    for(order &i: o) cout << i.flightNo << " " << i.departureTime << " " << i.destination << "\n";

    return 0;
}
