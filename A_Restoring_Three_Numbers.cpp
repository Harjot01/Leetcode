// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec(4, 0);
    for (int i = 0; i < 4; ++i)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cout << vec[3] - vec[0] << " " << vec[3] - vec[1] << " " << vec[3] - vec[2];

    return 0;
}