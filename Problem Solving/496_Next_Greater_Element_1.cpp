// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans(nums1.size(), -1);
        stack<int> st;
        unordered_map<int, int> mp;
        st.push(nums2[nums2.size() - 1]);
        for (int i = nums2.size() - 2; i >= 0; i--)
        {
            while (!st.empty() and st.top() <= nums2[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        for (int i = 0; i < nums1.size(); ++i)
        {
            if (mp[nums1[i]] != 0)
                ans[i] = mp[nums1[i]];
        }
        return ans;
    }
};

int main()
{

    return 0;
}