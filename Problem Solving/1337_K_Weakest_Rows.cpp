// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    int n = mat.size();
    int m = mat[0].size();
    vector<int> result;
    multimap<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        int count(0);
        for (int j = 0; j < m; ++j)
        {
            if (mat[i][j] == 1)
                count++;
        }

        mp.insert(pair<int, int>(count, i));
    }

    for (auto m : mp)
    {
        if(k > 0)
            result.push_back(m.second);
        k--;
    }

    return result;
}

int main()
{
    vector<vector<int>> vec = {{1, 1, 0, 0, 0},
                               {1, 1, 1, 1, 0},
                               {1, 0, 0, 0, 0},
                               {1, 1, 0, 0, 0},
                               {1, 1, 1, 1, 1}};

    vector<int> result = kWeakestRows(vec, 3);

    for (auto r : result)
    {
        cout << r << " ";
    }
    return 0;
}