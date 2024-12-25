// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int mini = 0, maxi = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[maxi] < arr[i])
            maxi = i;
        if (arr[mini] >= arr[i])
            mini = i;
    }
    if (mini < maxi)
        cout << (maxi - 1) + (n - mini) - 1;

    else
        cout << (maxi - 1) + (n - mini);

    return 0;
}