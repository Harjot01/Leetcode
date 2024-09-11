// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    multimap<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        mp.insert({a, b});
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        for (auto it1 = mp.begin(); it1 != mp.end(); it1++)
        {
            if (it->first == it1->second)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}