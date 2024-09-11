// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<int> a(123, 0);
    bool isPangram = true;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            a[s[i]]++;
    }
    for (int i = 97; i <= 122; ++i)
    {
        if (a[i] == 0)
        {
            isPangram = false;
            break;
        }
    }
    if (isPangram)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}