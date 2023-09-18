// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;


// Approach 1
void rotate1(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);
    for (int i = 0; i < n; ++i)
    {
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;
}


// Approach 2
void rotate2(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    if (k < 0)
        k += n;
    reverse(nums.begin(), nums.begin() + n - k);
    reverse(nums.begin() + n - k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    rotate1(nums, 3);
    for (auto v : nums)
    {
        cout << v << " ";
    }

    return 0;
}