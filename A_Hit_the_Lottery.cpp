// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d1 = 100, d2 = 20, d3 = 10, d4 = 5, d5 = 1, cnt(0);
    cin >> n;

    if (n >= d1)
    {
        while (n >= d1)
        {
            n = n - d1;
            cnt++;
        }
    }
    if (n >= d2)
    {
        while (n >= d2)
        {
            n = n - d2;
            cnt++;
        }
    }
    if (n >= d3)
    {
        while (n >= d3)
        {
            n = n - d3;
            cnt++;
        }
    }
    if (n >= d4)
    {
        while (n >= d4)
        {
            n = n - d4;
            cnt++;
        }
    }
    if (n >= d5)
    {
        while (n >= d5)
        {
            n = n - d5;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}