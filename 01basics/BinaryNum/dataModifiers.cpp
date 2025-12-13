#include <iostream>
using namespace std;

// Data Modifiers are use to alter the storing capacity of existing data type

// long (more than int)
// short (2 byte)
// signed and unsigned   -> unsigned can only store +ve numbers
// long long -> same as long long int

int main() {
    long long int x = 10;
    cout << sizeof(x) << endl;

    unsigned long long num = 10;
    cout << sizeof(num);

    return 0;
}