// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

// Moore’s Voting Algorithm O(n) + O(n)

int majorityElement(vector<int> &v)
{
    int count(0), elt;

    for (int i = 0; i < v.size(); ++i)
    {
        if (count == 0)
        {
            count = 1;
            elt = v[i];
        }
        else if (v[i] == elt)
            count++;
        else
            count--;
    }
    int ct(0);
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == elt)
            ct++;
    }

    return (ct > v.size() / 2 ? elt : -1);
}

// Using Hashing O(n*log(n)) + O(n)
int majorityElement(vector<int> &v)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < v.size(); ++i)
        mp[v[i]]++;

    for (auto m : mp)
    {
        if (m.second > v.size() / 2)
            return m.first;
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << ans << endl;
    return 0;
}