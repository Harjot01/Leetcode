// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    map<int, int> mp;
    mp[0] = 1;
    int preSum(0), remove, cnt(0);
    for (int i = 0; i < nums.size(); ++i)
    {
        preSum += nums[i];
        remove = preSum - k;
        cnt += mp[remove];
        mp[preSum] += 1;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};

    int result = subarraySum(arr, 6);
    cout << result;
    return 0;
}