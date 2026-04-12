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
    ms.insert(10);

    for(int x: ms)
    {
        cout << x << " ";
    }
    
    cout << "\n";

    cout << "count of 10: " << ms.count(10) << "\n";
    cout << "smallest: " << *ms.begin() << "\n";
    cout << "largest: " << *ms.rbegin() << "\n";

    // ms.erase(element)
    
    // NOTE: ms.erase(10) will remove all 10 in multiset
    // to remove only one 10 from multiset use ms.erase(ms.find(10));
    // this will remove the first (iterator) occurence of the element
    
}