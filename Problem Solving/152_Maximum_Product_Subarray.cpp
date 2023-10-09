// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    long long prefix(1);
    long long suffix(1);
    long long maxi = LONG_MIN;
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;
        prefix *= nums[i];
        suffix *= nums[n - i - 1];
        maxi = max(maxi, max(prefix, suffix));
    }
    return maxi;
}

int main()
{
    vector<int> vec = {2, 3, -2, 4};
    int result = maxProduct(vec);
    cout << result;
    return 0;
}