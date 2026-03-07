#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4};
    vector<int> vec3(5, -1);  // creating vector of size 5 and initialing it with -1;

    // note: vec3 is object of vector and (5, -1) are constructor values

    cout << vec1.size() << endl;
    cout << vec2.size() << endl;
    cout << vec3.size() << endl;


    for(int i=0; i<vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }
    
    // vector stores elements in contiguous memory, so vec3[i] works like array indexing
    // internally similar to *(vec3.data() + i)
    return 0;
}

// vectors 

