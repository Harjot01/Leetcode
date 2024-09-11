// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '1')
            {
                int j = i + 1;
                int ct = 0;
                while (s[j] != '1' and j < s.size())
                {
                    if (j == s.size() - 1 and s[j] != '1')
                    {
                        ct = 0;
                        break;
                    }
                    ct++;
                    j++;
                }
                count += ct;
            }
        }
        cout << count << "\n";
    }
    return 0;
}