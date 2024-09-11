// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string g_name, h_name, m_name, s;
    cin >> g_name >> h_name >> m_name;
    bool ans = true;

    s = g_name + h_name;
    sort(s.begin(), s.end());
    sort(m_name.begin(), m_name.end());

        if (s == m_name)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}