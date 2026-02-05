#include <iostream>
using namespace std;

int main() {

    // greatest of three numbers

    /* int a, b, c;

    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;

    if(a > b && (b >= c || c >= b)) {
        cout << "Greatest Numbers is: " << a;
    }
    else if(b > c && (c >= a || a >= c)) {
        cout << "Greatest Numbers is: " << b;
    }
    else if(c > b && (b >= a || a >= b)) {
        cout << "Greatest Numbers is: " << c;
    }
    else {
        cout << "they are equal" << endl;
    } */

    // Ternary operator
    // Syntax : (condition) ? if TRUE : if FALSE

    int age;
    cin >> age;
    
    (age >= 18) ? cout << "Adult" : cout << "under 18";

    return 0;
}