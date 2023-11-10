// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int> &arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] < 0)
        {
            while (!ans.empty() and abs(arr[i]) > ans.back() and ans.back() >= 0)
                ans.pop_back();
            if (ans.empty() or ans.back() < 0)
                ans.push_back(arr[i]);

            else if (abs(arr[i]) == ans.back())
                ans.pop_back();
        }
        else
            ans.push_back(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {5, 10, -5};
    vector<int> result = asteroidCollision(arr);
    for (auto res : result)
        cout << res << " ";

    return 0;
}