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
        int diff = abs(a - b);
        if (diff > 10)
            cout << (diff % 10 == 0 ? diff / 10 : diff / 10 + 1) << "\n";
        else if (diff >= 1 and diff <= 10)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}