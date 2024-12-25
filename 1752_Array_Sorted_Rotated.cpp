// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0;
    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i - 1] > nums[i])
            count++;
    }
    if (nums[nums.size() - 1] > nums[0])
        count++;
    if (count <= 1)
        return true;
    else
        return false;
}

int main()
{
    vector<int> vec = {3, 4, 5, 1, 2};
    if (check(vec))
        cout << "True";
    else
        cout << "False";
    return 0;
}