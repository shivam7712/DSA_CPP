#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(double a, double b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {

    sum(5, 10);
    sum(4.5, 5.5);
    sum(2, 3, 5);

    // function overloading is done on the basis of 
    // number of parameters and type of parameters
    
    return 0;
}