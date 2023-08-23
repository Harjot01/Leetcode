// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int top = 0, bottom = row - 1, left = 0, right = col - 1;
    int dir = 0;
    while (top <= bottom and left <= right)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; ++i)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
        }

        else if (dir == 1)
        {
            for (int i = top; i <= bottom; ++i)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
        }

        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        else if (dir == 3)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

        dir = (dir + 1) % 4;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 10}};
    vector<int> result = spiralOrder(arr);
    for (int var : result)
    {
        cout << var << " ";
    }

    return 0;
}