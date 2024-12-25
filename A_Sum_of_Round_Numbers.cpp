// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, power(1);
        cin >> n;
        vector<int> vec;
        while (n > 0)
        {
            if (n % 10 > 0)
                vec.push_back((n % 10) * power);
            n /= 10;
            power *= 10;
        }
        cout << vec.size() << "\n";
        for (auto v : vec)
            cout << v << " ";
        cout << "\n";       
    }
    return 0;
}