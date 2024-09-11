// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int elt)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == elt)
            return i + 1;
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, value(0);
        cin >> n;
        vector<int> vec(n, 0);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }
        for (auto m : mp)
        {
            if (m.second == 1)
            {
                value = m.first;
                break;
            }
        }
        auto result = linearSearch(vec, value);
        cout << result << endl;
    }
    return 0;
}