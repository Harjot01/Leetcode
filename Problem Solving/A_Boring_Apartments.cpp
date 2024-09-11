// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int digits = log10(n) + 1;
        int count = 0;
        while (digits > 0)
        {
            count += digits;
            digits--;
        }

        int rows = n % 10;
        cout << (rows - 1) * 10 + count << "\n";
    }
    return 0;
}