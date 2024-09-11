// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, rem(0), cnt(0);
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        if (rem == 4 or rem == 7)
            cnt++;
        n /= 10;
    }
    if (cnt == 4 or cnt == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}