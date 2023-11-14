// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int n = heights.size();
        int maxArea = 0;
        for (int i = 0; i <= n; ++i)
        {
            while (!st.empty() and (i == n or heights[st.top()] >= heights[i]))
            {
                int height = heights[st.top()];
                st.pop();
                int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;
                maxArea = max(maxArea, width * height);
            }
            st.push(i);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int result = 0;
        vector<int> hist(col, 0);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (matrix[i][j] == '1')
                    hist[j] += 1;
                else
                    hist[j] = 0;
            }
            result = max(result, largestRectangleArea(hist));
        }
        return result;
    }
};

int main()
{

    return 0;
}