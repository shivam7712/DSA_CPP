#include <iostream>
#include <vector>

using namespace std;

void printGrid(vector<vector<char>> &grid)
{
    for(vector<char> &i: grid)
    {
        for(char &ele: i) cout << ele;
        cout << "\n";
    }
}

bool canPlace(char digit, vector<vector<char>> &grid, int r, int c)
{

    int i = r;
    int j = 0;

    // row check
    for(j=0; j<grid.size(); j++)
    {
        if(grid[i][j] == digit) return false;
    }

    // column check
    i = 0;
    j = c;

    for(i=0; i<grid.size(); i++)
    {
        if(grid[i][j] == digit) return false;
    }

    // 3x3 subgrid check
    // find starting point of grid

    i = (r / 3) * 3;
    j = (c / 3) * 3;

    for(int row = i; row < i+3; row++)
    {
        for(int col = j; col < j+3; col++)
        {
            if(digit == grid[row][col]) return false;
        }
    }

    return true;
}

bool placeNumbers(vector<vector<char>>& grid, int i, int j, int n)
{
    if(i == n)
    {
        printGrid(grid);
        return true;
    }
    if(j == n)
    {
        return placeNumbers(grid, i+1, 0, n);
    }

    if(grid[i][j] != '.')
    {
        return placeNumbers(grid, i, j+1, n);
    }

    else
    {
        for(char digit='1' ; digit<='9'; digit++)
        {
            if(canPlace(digit, grid, i, j))
                    {
                        grid[i][j] = digit;

                        if(placeNumbers(grid, i, j + 1, n))
                            return true;

                        grid[i][j] = '.';
                    }
        }
    }
    return false;

}

int main()
{
    const int n = 9;

    vector<vector<char>> grid(n, vector<char>(n));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> grid[i][j];
        }
    }


    placeNumbers(grid, 0, 0, n);



    return 0;
}
