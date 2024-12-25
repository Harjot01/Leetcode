// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec(5, vector<int>(5));
    int r_idx, c_idx;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> vec[i][j];
            if (vec[i][j] == 1)
            {
                r_idx = i;
                c_idx = j;
            }
        }
    }
    int result = abs(2 - r_idx) + abs(2 - c_idx);
    cout << result;
    return 0;
}