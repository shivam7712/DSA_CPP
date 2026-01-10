#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> mySet;
    mySet.insert(12);
    mySet.insert(43);
    mySet.insert(10);
    mySet.insert(4);
    mySet.insert(43);

    cout << "mySet size: " << mySet.size() << endl;
    
    mySet.find(43) != mySet.end() ? cout<< "mil gya" : cout << "nahi mila";
    return 0;

    // note: if mySet.find(number) will not find the number in the set it will return .end()
}

