// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt(0);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
            cnt += 4;
        if (s == "Cube")
            cnt += 6;
        if (s == "Octahedron")
            cnt += 8;
        if (s == "Dodecahedron")
            cnt += 12;
        if (s == "Icosahedron")
            cnt += 20;
    }
    cout << cnt;
    return 0;
}