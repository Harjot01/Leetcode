// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;


// single pass
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


// many passes
int largestRectangleArea(vector<int> &heights)
{
    stack<int> s1, s2;
    int n = heights.size();
    vector<int> left_smaller(n, 0);
    vector<int> right_smaller(n, 0);

    // calculate left smaller for every index
    for (int i = 0; i < n; ++i)
    {
        while (!s1.empty() and heights[i] <= heights[s1.top()])
        {
            s1.pop();
        }
        if (s1.empty())
            left_smaller[i] = 0;
        else
            left_smaller[i] = s1.top() + 1;
        s1.push(i);
    }

    // calculate right smaller for every index
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s2.empty() and heights[i] <= heights[s2.top()])
        {
            s2.pop();
        }
        if (s2.empty())
            right_smaller[i] = n - 1;
        else
            right_smaller[i] = s2.top() - 1;
        s2.push(i);
    }

    int max_area = 0;
    for (int i = 0; i < n; ++i)
    {
        int area = (right_smaller[i] - left_smaller[i] + 1) * heights[i];

        max_area = max(max_area, area);
    }
    return max_area;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3, 1};
    int result = largestRectangleArea(heights);
    cout << result;
    return 0;
}