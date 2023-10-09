// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        if (i > 0 and nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; ++j)
        {
            if (j > i + 1 and nums[j] == nums[j - 1])
                continue;
            int left = j + 1;
            int right = n - 1;
            while (left < right)
            {
                long long sum = nums[left];
                sum += nums[i];
                sum += nums[j];
                sum += nums[right];
                if (sum < target)
                    left++;

                else if (sum > target)
                    right--;
                else
                {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right and nums[left] == nums[left + 1])
                        left++;
                    while (left < right and nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
            }
        }
    }

    return result;
}

int main()
{
    vector<int> vec = {1, 0, -1, 0, -2, 2};
    vector<vector<int>> result = fourSum(vec, 0);
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