// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class StockSpanner
{
public:
    stack<pair<int, int>> st;
    StockSpanner()
    {
    }

    int next(int price)
    {
        int count = 1;
        while (!st.empty() and price >= st.top().first)
        {
            int ct = st.top().second;
            count += ct;
            st.pop();
        }
        st.push({price, count});
        return st.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main()
{

    return 0;
}