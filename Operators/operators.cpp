#include <iostream>
using namespace std;

int main() {

    // Arithmatic op (unary |binary)
    // unary single operand | binary two operand

    // unary :  + ,  - ,  * ,  / ,  % 
    // binary : ++ ,  --

    int a = 10;
    int b = 10;
    

    int post_result = a++;  // assgin first then increment
    int pre_result  = ++b;  // increment first then assign
    
    cout << "Post: " << post_result << endl;
    cout << "Pre:  " << pre_result << endl; 

    // Assignment Operator = ,  += ,  -= ....
    // Relational Operator == , < , > , <=, >=
    // Logical Operator && ,  || ,  !
    
    return 0;
}