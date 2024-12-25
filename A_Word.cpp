// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int low_ct(0), up_ct(0);
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            low_ct++;
        else
            up_ct++;
    }

    // lowercase characters have higher ascii value than uppercase characters
    if (low_ct >= up_ct)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'A' and s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
    }
    else
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 'a' and s[i] <= 'z')
                s[i] = s[i] - 32;
        }
    }

    cout << s;

    return 0;
}