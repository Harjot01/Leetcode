// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> vec(5, "");
    bool found = false;
    for (int i = 0; i < 5; ++i)
    {
        cin >> vec[i];
        if (vec[i][0] == s[0] || vec[i][1] == s[1])
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}