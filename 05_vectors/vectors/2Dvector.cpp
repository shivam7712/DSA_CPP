#include <iostream>
using namespace std;

int main()
{
    // to create 2d vector we will create vector of vectors

    vector <vector <int>> matrix = {{1, 2, 3, 4},
                                    {5, 6, 7, 8},
                                    {9, 10, 11, 12}};

    for (int i=0; i<matrix.size(); i++)
    {   
        for(int j=0; j<matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}