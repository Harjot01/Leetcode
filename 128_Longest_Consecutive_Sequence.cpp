// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int> &a)
{
    int n = a.size(), longest(1);
    if (n == 0)
        return 0;

    unordered_set<int> st;

    for (int i = 0; i < n; ++i)
    {
        st.insert(a[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                cnt++;
                x += 1;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main()
{

    vector<int> vec = {5, 8, 3, 2, 1, 4};
    int result = longestSuccessiveElements(vec);
    cout << result << endl;
    return 0;
}