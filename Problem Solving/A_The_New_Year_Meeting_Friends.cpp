// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, result;
    cin >> a >> b >> c;
    result = max(a, max(b, c)) - min(a, min(b, c));
    cout << result;

    return 0;
}