// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < nums.size(); ++i)
        {
            // removing the elements front the front that are out of window size
            while (!dq.empty() and dq.front() < i - k + 1)
                dq.pop_front();

            // removing the elements from the back that are smaller than the current element
            while (!dq.empty() and nums[i] > nums[dq.back()])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};

int main()
{

    return 0;
}