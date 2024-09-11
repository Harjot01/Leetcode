// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<int> vec(3, 0);
        cin >> vec[0];
        cin >> vec[1];
        cin >> vec[2];

        sort(vec.begin(), vec.end());
        if (vec[0] + vec[1] == vec[2])
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}