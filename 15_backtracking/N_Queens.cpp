#include <iostream>
#include <vector>

using namespace std;
vector<vector<vector<char>>> result;
int possibleSolution = 0;

bool canPlace(vector<vector<char>> &board, int r, int c)
{
    // up
    int i = r;
    int j = c;

    while(i >= 0)
    {
        if(board[i][j] == 'Q') return false;
        i--;
    }

    // up left
    i = r;
    j = c;

    while(i>=0 && j>=0)
    {
        if(board[i][j] == 'Q') return false;
        i--;
        j--;
    }

    //up right
    i = r;
    j = c;

    while(i>=0 && j < board.size())
    {
        if(board[i][j] == 'Q') return false;
        i--;
        j++;
    }

    return true;

}

void printResult(int n)
{
    int c = possibleSolution;
    for(vector<vector<char>> &TWO_D: result)
    {
        c--;
        for(vector<char> &ONE_D: TWO_D)
        {
            for(char element: ONE_D)
            {
                cout << element << "";
            }
            cout << "\n";
        }

        if(c==0) break;
        cout << "\n";

    }

}

void placeNqueens(vector<vector<char>> &board, int n, int i)
{

    if(i == n)
    {
        possibleSolution++;
        result.push_back(board);
        return;
    }

    for(int j=0; j<n; j++)
    {

        if(canPlace(board, i, j))
        {
            board[i][j] = 'Q';
            placeNqueens(board, n, i+1);
            board[i][j] = '.';
        }

    }
}

int main()
{

    int n;
    cin >> n;

    vector<vector<char>> board(n, vector<char>(n, '.'));

    placeNqueens(board, n, 0);
    cout << possibleSolution << "\n";
    printResult(n);




    return 0;
}
