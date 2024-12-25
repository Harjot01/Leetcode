// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string f1 = "I hate ";
    string f2 = "I love ";
    string f3 = "that ";
    string f4 = "it ";

    string result;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (i & 1)
        {
            if(i == n)
            {
                result += f1;
                result += f4;
            }
            else
            {
                result += f1;
                result += f3;
            }
        }
        else
        {
            if(i == n)
            {
                result += f2;
                result += f4;
            }
            else
            {
                result += f2;
                result += f3;
            }
        }
    }
    cout << result;

    return 0;
}