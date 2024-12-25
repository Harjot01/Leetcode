// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> res(m, vector<int>(n, -1));

        queue<pair<int, int>> q;

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (mat[i][j] == 0)
                {
                    q.push({i, j});
                    res[i][j] = 0;
                }
            }
        }

        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        while (!q.empty())
        {
            auto [x, y] = q.front();
            q.pop();

            for (auto &direction : directions)
            {
                int nx = x + direction.first;
                int ny = y + direction.second;

                if (nx >= 0 && nx < m && ny >= 0 && ny < n && res[nx][ny] == -1)
                {
                    res[nx][ny] = res[x][y] + 1;
                    q.push({nx, ny});
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