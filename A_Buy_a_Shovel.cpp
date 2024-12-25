// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int i = 2, value = k, count = 1;
    while (1)
    {
        if (value % 10 == 0)
        {
            cout << count;
            break;
        }

        if (value % 10 == r)
        {   
            cout << count;
            break;
        }
        value = k * i;
        i++;
        count++;
    }
    return 0;
}