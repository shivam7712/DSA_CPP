#include <iostream>

using namespace std;

int product(int a, int b) {
    return a*b;
}

bool isEven(int num) {
    if(num%2 == 0) return true;
    return false;
}

int factorial(int num) {

    int result = 1;

    while(num > 0) {
        result *= num;
        --num;
    }
    
    return result;
}

int fact(int num) {

    // recursion

    if(num == 1) {
        return 1;
    }

    return num * fact(num-1);

}

int main() {
    /* 
    cout << product(5, 3) << endl;
    isEven(2) ? cout << "Yes it's even" : cout << "Oops it's not an even number";
    */

    int num = fact(5);
    cout << num;
    return 0;
}

// forward declaration: when we declare a function above main function
// and the declaration is below main function.