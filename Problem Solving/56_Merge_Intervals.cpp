// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);

    for (int i = 0; i < n; ++i)
    {
        if(ans.empty() or intervals[i][0] > ans.back()[1])
            ans.push_back(intervals[i]);
        else
        {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> vec = {{1, 4}, {0, 4}};
    vector<vector<int>> result = merge(vec);
    for (auto res : result)
    {
        for (auto r : res)
        {
            cout << r << " ";
        }
        cout << endl;
    }
    return 0;
}