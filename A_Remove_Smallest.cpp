// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        bool result = true;
        vector<int> vec(n, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n - 1; ++i)
        {
            if (abs(vec[i] - vec[i + 1]) > 1)
            {
                result = false;
                break;
            }
        }

        if (result)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}