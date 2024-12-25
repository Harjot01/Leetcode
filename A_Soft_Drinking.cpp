// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_volume = k * l;
    int total_drinks = total_volume / nl;
    int limes = c * d ;
    int salt = p / np;

    int result = min(total_drinks, min(limes, salt)) / n;
    cout << result;
    return 0;
}