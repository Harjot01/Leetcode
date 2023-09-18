// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

// Using two pointer approach O(2 * n)
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while (right < n)
    {
        while (sum > k and left <= right)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += a[right];
    }   
    return maxLen;
}

// Using Hashmap O(n * log(n))
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    map<long long, int> PreSumMap;
    long long sum(0);
    int maxLen(0);
    for (int i = 0; i < a.size(); ++i)
    {
        sum += a[i];

        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (PreSumMap.find(rem) != PreSumMap.end())
        {
            int len = i - PreSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (PreSumMap.find(sum) == PreSumMap.end())
            PreSumMap[sum] = i;
    }
    return maxLen;
}

int main()
{
    vector<int> vec = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    int result = longestSubarrayWithSumK(vec, 6);
    cout << result;
    return 0;
}