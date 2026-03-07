#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector <int> vec = {1, 2, 3, 4};

    cout << "size of vector: " << vec.size() << '\n';
    cout << "capacity of vector: " << vec.capacity() << '\n';

    vec.push_back(5);
    
    cout << "size of vector: " << vec.size() << '\n';
    cout << "capacity of vector: " << vec.capacity() << '\n';


    // the size indicates the no of element in vector 
    // and the capacity indicates the total capacity of vector

/* 
    note when capacity is 4 and size is 4 
    and you try to add a element at the end of vector 
    the capacity will increase by 2 times of the original capacity.
    then your elements will be copied to new vector of capacity double
    and the time taken by vector to copy is O(n)
*/



    // to remove element 
    vec.pop_back();


    
    return 0;
}



