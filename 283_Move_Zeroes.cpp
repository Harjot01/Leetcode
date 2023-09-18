// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); ++j)
        {
            if(nums[j] != 0)
            {
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }

int main()
{
    vector<int> arr = {0, 0, 74, 13, 95, 36, 79};
    moveZeroes(arr);
    for (auto r : arr)
    {
        cout << r << " ";
    }
    return 0;
}