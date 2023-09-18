// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> temp = nums;
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
        {
            int elt1, elt2;
            if (nums[left] == nums[right])
            {
                auto it1 = find(temp.begin(), temp.end(), nums[left]);
                auto it2 = find(temp.begin() + (left + 1), temp.end(), nums[right]);
                elt1 = it1 - temp.begin();
                elt2 = it2 - temp.begin();
            }
            else
            {

                auto it1 = find(temp.begin(), temp.end(), nums[left]);
                auto it2 = find(temp.begin(), temp.end(), nums[right]);
                elt1 = it1 - temp.begin();
                elt2 = it2 - temp.begin();
            }
            return {elt1, elt2};
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
    return {-1, -1};
}

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
    vector<int> nums = {2, 6, 5, 8, 11};
    vector<int> result = twoSum(nums, 14);
    for (auto v : result)
    {
        cout << v << " ";
    }
    return 0;
}