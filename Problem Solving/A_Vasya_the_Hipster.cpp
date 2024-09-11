// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, diff_ct(0), same_ct(0);
    cin >> a >> b;
    while (a != 0 and b != 0)
    {
        a--;
        b--;
        diff_ct++;
    }
    if (a != 0)
        same_ct = a / 2;
    else
        same_ct = b / 2;
    
    cout << diff_ct << " " << same_ct << "\n";
    return 0;
}