#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> vec;
        int size = nums.size();
        int i = 0;
        int count = 0;
        while (i < size)
        {
            if (val != nums[i])
            {
                vec.push_back(nums[i]);
                count++;
                i++;
            }
            else
            {
                i++;
            }
        }
        
        // Write your logic to copy values of "vec" inside "nums"
        for (int i = 0; i < vec.size(); i++) // vec.size() issliye kyuki hume sirf vec ke elements ko copy krna hai
        {
            nums[i] = vec[i];
        }
        return count;
    }
};

int main()
{

    vector<int> vec = {3, 2, 2, 3};
    int val = 3;
    Solution obj;
    int k = obj.removeElement(vec, val);
    cout << k << endl;

    return 0;
}