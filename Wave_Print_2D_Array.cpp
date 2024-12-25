// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int i = 0; i < nRows; ++i)
    {
        if (i & 1)
        {

            for (int j = mCols - 1; j >= 0; --j)
            {
                ans.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < mCols; ++j)
            {
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr;
    int nRows, mCols;
    cin >> nRows >> mCols;
    for (int i = 0; i < nRows; i++)
    {
        vector<int> v;
        for (int j = 0; j < mCols; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        arr.push_back(v);
    }

    vector<int> result = wavePrint(arr, nRows, mCols);
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";
    return 0;
}