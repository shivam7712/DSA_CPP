#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;

    // creating dynamic array
    // arr is pointing to the array
    int *arr = new int[n];

    int x = 1;

    for(int i=0; i<n; i++)
    {
        arr[i] = x++;
        cout << arr[i] << " ";
    }
    cout << endl;

    // dynamic pointer
    int *ptr = new int;
    *ptr = 15;
    cout << "pointer pointing to heap: "<< *ptr << endl;

    // deallocation of memory
    
    delete ptr;
    delete []arr;

    return 0;
}

