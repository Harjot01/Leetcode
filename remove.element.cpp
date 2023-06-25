#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> vec;
        int size = nums.size();
        int i = 0;
        int count = 0;
        while(i<size)
        {
            if(val != nums[i])
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
          for (int i = 0; i < vec.size(); i++)
        {
            nums[i] = vec[i];
        }
        return count;

    }
};