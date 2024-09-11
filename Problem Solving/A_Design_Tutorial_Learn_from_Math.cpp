// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, first, second;
    cin >> n;
    if (n % 2)
    {
        first = 9;
        second = n - 9;
    }
    else
    {
        first = 4;
        second = n - 4;
    }
    cout << first << " " << second;
    return 0;
}