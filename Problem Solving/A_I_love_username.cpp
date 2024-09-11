// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt(0);
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int less = arr[0];
    int more = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < less)
        {
            less = arr[i];
            cnt++;
        }
        if (arr[i] > more)
        {
            more = arr[i];
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}