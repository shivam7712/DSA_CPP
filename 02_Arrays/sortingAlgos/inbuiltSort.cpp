#include <iostream>
using namespace std;

int main() {
    int nums[8] = {1, 4, 1, 3, 2, 4, 3, 8};

    sort(nums, nums+8);

    // sort (nums+ start, nums+end) to sort a specfic part

    for(int i=0; i<8; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
