#include <iostream>
using namespace std;

void print (int mat[][4])
{
    // cout << *(*(mat)); // will print mat[0][0];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << *(*(mat+i)+j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    print(mat);

    return 0;
}

