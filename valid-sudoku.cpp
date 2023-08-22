#include <iostream>
#include <vector>

using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                for (int k = 0; k < 9; k++)
                {
                    if (i != k && board[i][j] == board[k][j])
                        return false;
                    if (j != k && board[i][j] == board[i][k])
                        return false;
                }

                for (int k = (i / 3) * 3; k < (i / 3) * 3 + 3; k++)
                {
                    for (int l = (j / 3) * 3; l < (j / 3) * 3 + 3; l++)
                    {
                        if (board[i][j] == board[k][l] && (i != k && j != l))
                            return false;
                    }
                }
            }
        }
    }

    return true;
}

int main()
{
    vector<vector<char>> board = {{'.', '.', '5', '.', '.', '.', '.', '.', '.'},
                                  {'.', '.', '.', '8', '.', '.', '.', '3', '.'},
                                  {'.', '5', '.', '.', '2', '.', '.', '.', '.'},
                                  {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                  {'.', '.', '.', '.', '.', '.', '.', '.', '9'},
                                  {'.', '.', '.', '.', '.', '.', '4', '.', '.'},
                                  {'.', '.', '.', '.', '.', '.', '.', '.', '7'},
                                  {'.', '1', '.', '.', '.', '.', '.', '.', '.'},
                                  {'2', '4', '.', '.', '.', '.', '9', '.', '.'}};

    cout << isValidSudoku(board);
    return 0;
}