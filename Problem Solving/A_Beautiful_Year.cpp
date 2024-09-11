// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    while (1)
    {
        year++;
        int a = year / 1000;
        int b = year / 100 % 10;
        int c = year / 10 % 10;
        int d = year % 10;

        if (a != b and a != c and a != d and b != c and b != d and c != d)
            break;
    }
    cout << year;
    return 0;
}