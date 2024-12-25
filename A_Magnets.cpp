// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt(0);
    cin >> n;
    vector<string> vec;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if (vec[i][1] == vec[i + 1][0])
            cnt++;
    }

    cout << ++cnt;
    return 0;
}