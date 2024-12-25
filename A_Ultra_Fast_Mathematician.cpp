// Don't Overthink, Just Code
#include <bits/stdc++.h>
#define digits 10
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b;

    for (int i = 0; i < a.size(); ++i)
    {
        int res = a[i] - '0' ^ b[i] - '0';
        c += to_string(res);
    }
    cout << c;
    return 0;
}