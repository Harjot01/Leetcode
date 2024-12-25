// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

// Here we have to count the number of consecutive pairs

int main()
{
    int size, count(0);
    cin >> size;
    string s;
    cin >> s;
    for (int i = 0; i < size - 1; ++i)
    {
        if (s[i] == s[i + 1])
            count++;
    }
    cout << count;
    return 0;
}