// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, rev(0);
    cin >> x;
    long long int value = x;
    long long int size = log10(x) + 1;

    vector<int>
        vec;
    while (value != 0)
    {
        int rem = value % 10;
        if (value / 10 == 0 and rem == 9)
            vec.push_back(9);
        else
        {

            if (9 - rem < rem)
                vec.push_back(9 - rem);
            else
                vec.push_back(rem);
        }

        value /= 10;
    }

    reverse(vec.begin(), vec.end());
    for (auto v : vec)
        cout << v;

    return 0;
}