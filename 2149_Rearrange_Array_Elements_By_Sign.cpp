// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int> &a)
{
    int n = a.size();
    vector<int> ans(n, 0);
    int pos_idx = 0, neg_idx = 1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > 0)
        {
            ans[pos_idx] = a[i];
            pos_idx += 2;
        }
        else
        {
            ans[neg_idx] = a[i];
            neg_idx += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, -3, -1, -2, 3};
    vector<int> result = alternateNumbers(arr);
    for (auto v : result)
    {
        cout << v << " ";
    }
    return 0;
}