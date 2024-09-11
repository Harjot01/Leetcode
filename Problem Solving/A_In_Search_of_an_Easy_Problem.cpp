// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool isEasy = true;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            isEasy = false;
            break;
        }
    }
    if (!isEasy)
        cout << "HARD";
    else
        cout << "EASY";

    return 0;
}