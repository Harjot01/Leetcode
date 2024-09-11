// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << "\n";
        else if (a < b)
            cout << b - a << "\n";
        else
        {
            int res = a % b;
            cout << b - res << "\n";
        }
    }
    return 0;
}