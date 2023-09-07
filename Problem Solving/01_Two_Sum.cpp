// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    vector<int> result;

    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];

        if (map.find(complement) != map.end())
        {
            result.push_back(map[complement]);
            result.push_back(i);
        }

        map[nums[i]] = i;
    }
    return result;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result = twoSum(nums, 9);
    for (auto v : result)
    {
        cout << v << " ";
    }
    return 0;
}