#include <iostream>
using namespace std;

int main () {
    // TYPE CASTING

    // implicit typecasting
    // 'char' - 0 results in integer i.e. ASCII value of the char

    char ch = 'B';
    cout << ch - 0 << endl;
    
    // Type casting / explict conversion

    cout << (char)(ch - 1) << endl;
    

    return 0;
}