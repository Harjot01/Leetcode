// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        stack<int> st1, st2;
        int n = arr.size();
        vector<int> right(n), left(n);

        for (int i = 0; i < n; ++i)
        {
            right[i] = n - i - 1;
            left[i] = i;
        }

        for (int i = 0; i < n; ++i)
        {
            while (!st1.empty() and arr[st1.top()] > arr[i])
            {
                right[st1.top()] = i - st1.top() - 1;
                st1.pop();
            }
            st1.push(i);
        }

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st2.empty() and arr[st2.top()] >= arr[i])
            {
                left[st2.top()] = st2.top() - i - 1;
                st2.pop();
            }
            st2.push(i);
        }

        long long ans = 0;
        int mod = 1e9 + 7;
        for (int i = 0; i < n; ++i)
        {
            ans += (arr[i] * (long long)(left[i] + 1) * (right[i] + 1) % mod) % mod;
            ans = ans % mod;
        }
        return ans;
    }
};

int main()
{

    return 0;
}