#include <iostream>
using namespace std;

void fun1(int arr[], int n) {
    arr[0] = 77;
}

void fun2(int *arr, int n) {
    arr[0] = 77;
}

// fun1 and fun2 are the same: int arr[] can be written as *arr

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(int);
    // cout << *array+1;

    fun2(array, size);  // passing array name is eqivalant to passing pointer
    cout << array[0] << endl;

    return 0;
}


/* 
NOTE: array is a pointer that is pointing to first element of array
dereferencing will give you first element of array and if you do +1 to it
you'll get seconde element in the array
*/

// array are always passed by reference

// NOTE: always pass length of array in function because when we pass array
// it is passed by referece 
