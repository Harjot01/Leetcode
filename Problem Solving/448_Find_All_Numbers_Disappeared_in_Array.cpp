// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i)
        {
            int idx = abs(nums[i]) - 1;
            nums[idx] = (nums[idx] > 0) ? -nums[idx] : nums[idx];
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = obj.findDisappearedNumbers(nums);
    for (auto a : ans)
        cout << a << " ";
    return 0;
}