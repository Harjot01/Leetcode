// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ant_ct(0), dan_ct(0);
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'A')
            ant_ct++;
        else
            dan_ct++;
    }
    if (ant_ct > dan_ct)
        cout << "Anton";
    else if (ant_ct < dan_ct)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}