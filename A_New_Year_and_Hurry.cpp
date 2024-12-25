// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, total(0), cnt(0);
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        total += (5 * i);
        if (total + k <= 240)
            cnt++;
        else
            break;
    }

    cout << cnt;

    return 0;
}