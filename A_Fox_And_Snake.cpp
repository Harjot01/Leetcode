// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            bool havesnake = false;
            if (i % 2 == 1)
                havesnake = true;
            else
            {
                if (i % 4 == 2)
                    havesnake = (j == m); // havesnake holds true or false
                if (i % 4 == 0)
                    havesnake = (j == 1);
            }
            cout << (havesnake ? "#" : ".");
        }
        cout << endl;
    }

    return 0;
}