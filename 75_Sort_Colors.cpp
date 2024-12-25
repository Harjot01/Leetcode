// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

// Dutch national flag algorithm

void sortColors(vector<int> &nums)
{
    int low = 0, high = nums.size() - 1, mid = 0;
    while (mid <= high)
    {
        if (nums[mid] == 0)
            swap(nums[mid++], nums[low++]);
        else if (nums[mid] == 1)
            mid++;
        else
            swap(nums[mid], nums[high--]);
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (auto v : nums)
    {
        cout << v << " ";
    }
    return 0;
}