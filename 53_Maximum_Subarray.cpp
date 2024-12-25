// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;


// Kadane's Algorithm O(n)
int maxSubArray(vector<int> &nums)
{
    long long maxi = LONG_MIN;
    long long sum(0);
    int start, ansStart, ansEnd;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (sum == 0)
            start = i;
        sum += nums[i];x
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
            sum = 0;
    }

    // returning the maximum subarray

    // for (int i = ansStart; i <= ansEnd; ++i)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;

    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(nums);
    cout << result;
    return 0;
}