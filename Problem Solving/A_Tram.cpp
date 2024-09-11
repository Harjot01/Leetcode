// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, curr_capacity(0), max_capacity(-1);
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        curr_capacity = (curr_capacity - a) + b;
        max_capacity = max(max_capacity, curr_capacity);
    }
    cout << max_capacity;
    return 0;
}