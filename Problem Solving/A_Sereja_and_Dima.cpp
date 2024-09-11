// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int s = 0, e = n - 1, i = 1, s_ct(0), d_ct(0);
    while (s <= e)
    {
        if (i % 2 != 0)
        {
            if (arr[s] < arr[e])
            {
                s_ct += arr[e];
                e--;
            }
            else
            {
                s_ct += arr[s];
                s++;
            }
        }
        else
        {
            if (arr[s] < arr[e])
            {
                d_ct += arr[e];
                e--;
            }
            else
            {
                d_ct += arr[s];
                s++;
            }
        }
        i++;
    }
    cout << s_ct << " " << d_ct;

    return 0;
}