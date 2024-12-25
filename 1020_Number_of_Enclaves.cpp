// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &grid, int r, int c, vector<pair<int, int>> directions)
    {
        if (r < 0 || r == grid.size() || c < 0 || c == grid[0].size() || grid[r][c] != 1)
            return;

        grid[r][c] = -1;

        for (auto &dir : directions)
        {
            dfs(grid, r + dir.first, c + dir.second, directions);
        }
    }
    int numEnclaves(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1 && (i == 0 or i == m - 1 or j == 0 or j == n - 1))
                    dfs(grid, i, j, directions);
            }
        }

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1)
                    res++;
            }
        }
        return res;
    }
};

int main()
{

    return 0;
}