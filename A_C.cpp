// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, n, cnt(0);
        cin >> a >> b >> n;
        while (max(a, b) <= n)
        {
            if (a < b)
                a += b;
            else
                b += a;
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}