// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> rows(n, 0);
    vector<int> cols(m, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (rows[i] or cols[j])
                matrix[i][j] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> vec = {{2, 4, 3}, {1, 0, 0}};

    setZeroes(vec);

    for (auto res : vec)
    {
        for (auto r : res)
        {
            cout << r << " ";
        }
        cout << endl;
    }

    return 0;
}