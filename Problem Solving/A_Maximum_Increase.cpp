// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ct(0), max_ct(0);
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] < arr[i + 1])
            ct++;
        else
            ct = 0;
        max_ct = max(max_ct, ct);
    }
    cout << ++max_ct;

    return 0;
}