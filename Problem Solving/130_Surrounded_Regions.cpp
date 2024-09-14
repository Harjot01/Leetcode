// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<char>> &board, int row, int col, vector<pair<int, int>> &directions)
    {
        if (row < 0 || row == board.size() || col < 0 || col == board[0].size() || board[row][col] != 'O')
            return;

        board[row][col] = 'T';
        for (auto &dir : directions)
        {
            dfs(board, row + dir.first, col + dir.second, directions);
        }
    }
    void solve(vector<vector<char>> &board)
    {
        int rows = board.size();
        int cols = board[0].size();
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (board[i][j] == 'O' && (i == 0 or i == rows - 1 or j == 0 or j == cols - 1))
                    dfs(board, i, j, directions);
            }
        }

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == 'T')
                    board[i][j] = 'O';
            }
        }
    }
};

int main()
{

    return 0;
}