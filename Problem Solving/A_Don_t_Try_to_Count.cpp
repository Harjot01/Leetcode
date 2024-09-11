// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int solve(string x, string s)
{
    if (x.find(s) != string::npos)
        return 0;

    int op = 1;
    while (x.length() <= 25)
    {
        x += x;
        if (x.find(s) != string::npos)
            break;
        op++;
    }
    if (x.find(s) != string::npos)
        return op;
    else
        return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int c1, c2;
        string x, s;
        cin >> c1 >> c2;
        cin >> x >> s;
        cout << solve(x, s) << "\n";
    }
    return 0;
}