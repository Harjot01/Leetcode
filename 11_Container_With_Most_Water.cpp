// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int areaMax(0), n = height.size(), len;
    int l = 0, r = n - 1;
    while(l < r)
    {
        len = min(height[l], height[r]);
        areaMax = max(areaMax, len * (r - l));

        if(height[l] < height[r])
            l++;
        else
            r--;
    }
    return areaMax;
}

int main()
{
    vector<int> vec = {2, 3, 4, 5, 18, 17, 6};
    int result = maxArea(vec);
    cout << result;
    return 0;
}