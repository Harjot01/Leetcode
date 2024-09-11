// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double frac, result;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        frac = (double)arr[i] / 100;
        result += frac;
    }
    printf("%.12f", result / n * 100);
    return 0;
}