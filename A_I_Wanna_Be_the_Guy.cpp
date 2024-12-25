// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, y;
    cin >> x;
    vector<int> a(x, 0);
    set<int> st;
    for (int i = 0; i < x; ++i)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    cin >> y;
    vector<int> b(y, 0);
    for (int i = 0; i < y; ++i)
    {
        cin >> b[i];
        st.insert(b[i]);
    }

    if (st.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}