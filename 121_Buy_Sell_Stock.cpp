// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int mini = prices[0];
    int profit(0);
    int cost;

    for (int i = 0; i < prices.size(); ++i)
    {
        cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
    }

    return profit;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    cout << maxProfit(arr);
    return 0;
}