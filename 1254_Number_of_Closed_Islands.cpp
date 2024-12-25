// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &grid, int r, int c, vector<pair<int, int>> directions)
    {
        if (r < 0 or r == grid.size() || c < 0 || c == grid[0].size() || grid[r][c] != 0)
            return;
        grid[r][c] = -1;
        for (auto &dir : directions)
        {
            dfs(grid, r + dir.first, c + dir.second, directions);
        }
    }

    void bfs(int r, int c, vector<vector<int>> &grid, vector<vector<int>> &visited, vector<pair<int, int>> directions)
    {
        visited[r][c] = 1;
        queue<pair<int, int>> q;
        q.push({r, c});

        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();

            for (auto &dir : directions)
            {
                int nx = x + dir.first;
                int ny = y + dir.second;

                if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && grid[nx][ny] != 1 && grid[nx][ny] != -1 && !visited[nx][ny])
                {
                    visited[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;

        vector<vector<int>> visited(m, vector<int>(n, 0));
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 0 and (i == 0 or i == m - 1 or j == 0 or j == n - 1))
                    dfs(grid, i, j, directions);
            }
        }

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] != -1 && grid[i][j] != 1 && !visited[i][j])
                {
                    bfs(i, j, grid, visited, directions);
                    res++;
                }
            }
        }
        return res;
    }
};

int main()
{

    return 0;
}