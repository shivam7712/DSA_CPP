#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset <int> ms;

    ms.insert(10);
    ms.insert(4);
    ms.insert(10);
    ms.insert(3);

    for(int x: ms)
    {
        cout << x << " ";
    }
    
    cout << "\n";

    cout << "count of 10: " << ms.count(10) << "\n";
    cout << "smallest: " << *ms.begin() << "\n";
    cout << "largest: " << *ms.rbegin() << "\n";
    
}