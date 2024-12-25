// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        bool isSwapped = false;
        for (int j = 0; j < s.size() - i - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
            break;
    }
    cout << s;
    return 0;
}