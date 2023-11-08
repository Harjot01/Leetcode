// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int eliminateMaximum(vector<int> &dist, vector<int> &speed)
    {
        int killed = 0, n = dist.size();
        for (int i = 0; i < n; ++i)
        {
            if (dist[i] % speed[i] != 0)
                dist[i] = (dist[i] / speed[i]) + 1;
            else
                dist[i] = dist[i] / speed[i];
        }
        sort(dist.begin(), dist.end());

        for (int i = 0; i < dist.size(); ++i)
        {
            dist[i] = dist[i] - i;
            if (dist[i] <= 0)
                break;
            killed++;
        }
        return killed;
    }
};

int main()
{

    return 0;
}