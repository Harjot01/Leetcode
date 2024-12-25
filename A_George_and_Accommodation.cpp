// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt(0);
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (b - a >= 2)
            cnt++;
    }
    cout << cnt;
    return 0;
}