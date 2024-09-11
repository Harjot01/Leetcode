// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, ct(0);
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; ++i)
        {
            mp[s[i]]++;
        }

        for (int i = 0; i < k; ++i)
        {
            for (auto m : mp)
            {
                if (m.second % 2 == 1)
                {
                    mp.erase(m.first);
                    break;
                }
            }
        }

        for (auto m : mp)
        {
            if (m.second % 2 == 1)
                ct++;
        }
        if (ct > 1)
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }
    return 0;
}